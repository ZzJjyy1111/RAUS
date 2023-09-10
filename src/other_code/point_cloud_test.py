import numpy as np
import open3d as o3d
import matplotlib.pyplot as plt
import os

if __name__ == "__main__":

    print("Load a ply point cloud, print it, and render it")
    pcd = o3d.io.read_point_cloud(r"C:\Users\zjy\Desktop\last_dance.ply")
    # print(pcd)
    points = np.asarray(pcd.points)
    # print(points)
    o3d.visualization.draw_geometries([pcd])

    chosen_points = []
    center = np.array([0.015, -0.01, -0.26])
    radius = np.array([0.03, 0.05, 0.03])
    distances = np.linalg.norm(points - center, axis=1)
    for i in range(len(points)):
        if points[i,0]<center[0]+radius[0] and points[i,0]>center[0]-radius[0] and points[i,1]<center[1]+radius[1] and points[i,1]>center[1]-radius[1] and points[i,2]<center[2]+radius[2] and points[i,2]>center[2]-radius[2]:
        # if np.linalg.norm(points[i,:]-center)<radius:
            chosen_points.append(points[i,:])
    chosen_points = np.asarray(chosen_points)
    print(np.mean(chosen_points[:,0]))
    print(np.mean(chosen_points[:,1]))
    print(np.mean(chosen_points[:,2]))
    # print(chosen_points)
    pcd.points = o3d.utility.Vector3dVector(chosen_points)
    # print(pcd)
    # o3d.visualization.draw_geometries([pcd])
    # print("Downsample the point cloud with a voxel of 0.05")
    # downpcd = o3d.geometry.voxel_down_sample(pcd, voxel_size=0.05)
    # o3d.visualization.draw_geometries([downpcd])

    print("Recompute the normal of the downsampled point cloud")
    o3d.geometry.estimate_normals(
        pcd,
        search_param=o3d.geometry.KDTreeSearchParamHybrid(radius=0.1,
                                                          max_nn=30))
    o3d.visualization.draw_geometries([pcd])
    orient = np.asarray(pcd.normals)
    posit = np.asarray(pcd.points)
    print(len(orient))
    with open('threeDdata','w') as data:
        for i in range(len(orient)):
            if orient[i,2] < 0:
                orient[i,:] = -orient[i,:]
            data.write('\t'.join(map(str,posit[i,:].tolist()))+'\t'+'\t'.join(map(str,orient[i,:].tolist()))+'\n')
    data.close()
    # print("Print a normal vector of the 0th point")
    # print(downpcd.normals[0])
    # print("Print the normal vectors of the first 10 points")
    # print(np.asarray(downpcd.normals)[:10, :])
    # print("")

    # print("Load a polygon volume and use it to crop the original point cloud")
    # vol = o3d.visualization.read_selection_polygon_volume(
    #     "../../TestData/Crop/cropped.json")
    # chair = vol.crop_point_cloud(pcd)
    # o3d.visualization.draw_geometries([chair])
    # print("")

    # print("Paint chair")
    # chair.paint_uniform_color([1, 0.706, 0])
    # o3d.visualization.draw_geometries([chair])
    # print("")

#     with o3d.utility.VerbosityContextManager(
#         o3d.utility.VerbosityLevel.Debug) as cm:
#             labels = np.array(
#         pcd.cluster_dbscan(eps=0.02, min_points=10, print_progress=True))

# max_label = labels.max()
# print(f"point cloud has {max_label + 1} clusters")
# colors = plt.get_cmap("tab20")(labels / (max_label if max_label > 0 else 1))
# colors[labels < 0] = 0
# pcd.colors = o3d.utility.Vector3dVector(colors[:, :3])
# o3d.visualization.draw_geometries([pcd],
#                                   zoom=0.455,
#                                   front=[-0.4999, -0.1659, -0.8499],
#                                   lookat=[2.1813, 2.0619, 2.0999],
#                                   up=[0.1204, -0.9852, 0.1215])
