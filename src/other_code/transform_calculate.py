from re import T
import numpy as np
import math

def qt2rpy(q):
    [x,y,z,w] = q

    alpha = math.atan2(2 * (w * x + y * z), 1 - 2 * (x ** 2 + y ** 2))
    beta = math.asin(2 * (w * y - z * x))
    gamma = math.atan2(2 * (w * z + x * y), 1 - 2 * (y ** 2 + z ** 2))
    
    return np.asarray([alpha,beta,gamma])

def qt2rot(q):
    #q:list
    [x,y,z,w] = q
    return np.array([[1-2*y*y-2*z*z, 2*x*y-2*z*w, 2*x*z+2*y*w],
             [2*x*y+2*z*w, 1-2*x*x-2*z*z, 2*y*z-2*x*w],
             [2*x*z-2*y*w, 2*y*z+2*x*w, 1-2*x*x-2*y*y]])

def rot2qt(m):
    #m:array
    w = ((np.trace(m) + 1) ** 0.5) / 2
    x = (m[2][1] - m[1][2]) / (4 * w)
    y = (m[0][2] - m[2][0]) / (4 * w)
    z = (m[1][0] - m[0][1]) / (4 * w)
    return x,y,z,w

def rot2rpy(m):
        pitch = np.arctan2(-m[2, 0], np.sqrt(m[0, 0]**2 + m[1, 0]**2))

        if np.isclose(pitch, np.pi / 2.):
            yaw = 0.
            roll = np.arctan2(m[0, 1], m[1, 1])
        elif np.isclose(pitch, -np.pi / 2.):
            yaw = 0.
            roll = -np.arctan2(m[0, 1], m[1, 1])
        else:
            sec_pitch = 1. / np.cos(pitch)
            yaw = np.arctan2(m[1, 0] * sec_pitch,
                             m[0, 0] * sec_pitch)
            roll = np.arctan2(m[2, 1] * sec_pitch,
                              m[2, 2] * sec_pitch)
        return np.asarray([roll, pitch, yaw])

# rot_base = np.asarray([[0, -1, 0],
#                   [-1, 0, 0],
#                   [0, 0, -1]])
# rot = np.asarray([[1, 0, 0],
#                   [0, np.cos(np.pi/12.0), -np.sin(np.pi/12.0)],
#                   [0, np.sin(np.pi/12.0), np.cos(np.pi/12.0)]])
# rot = rot_base.dot(rot)
# # print(qt2rot(np.asarray([0.707,-0.707,0,0])))
# # print(rot)
# print(rot2qt(rot))
# # print(rot2qt(rot_base))
# # print(qt2rot(np.asarray([0.7010573846499781, -0.7010573846499781, 0.09229595564125723, 0.09229595564125723])))

# T_w_c = np.zeros((4,4))
# T_w_c[0:3,0:3] = qt2rot([0.00245872719276, -0.0116551044236, -0.706343056648, 0.707769453654])
# T_w_c[:,3] = [-0.0460639849005, 0.02830395155, 0.0150360841392, 1]
# print(qt2rot([0.00245872719276, -0.0116551044236, -0.706343056648, 0.707769453654]))
# print(T_w_c)
# T_l_c = np.zeros((4,4))
# T_l_c[0:3,0:3] = qt2rot([-0.00109339749906, -0.00222371635027, 0.00223722727969, 0.999994397163])
# T_l_c[:,3] = [0.000103043632407,  0.0147619768977,  -0.00030322643579, 1]
# print(T_l_c)
# T_w_l = T_w_c.dot(np.linalg.inv(T_l_c))
# T_w_l = T_w_l.dot(np.asarray([[0,0,-1,0],[0,1,0,0],[1,0,0,0],[0,0,0,1]]))
# T_w_l = T_w_l.dot(np.asarray([[1,0,0,0],[0,-1,0,0],[0,0,-1,0],[0,0,0,1]]))
# print(T_w_l)
# print(T_w_l[0:3,3])
# print(rot2qt(T_w_l[0:3,0:3]))

# print(qt2rot([0.00245872719276, -0.0116551044236, -0.706343056648, 0.707769453654]))

# # -0.0460639849005 0.02830395155 0.0150360841392 
# # 0.00245872719276 -0.0116551044236 -0.706343056648 0.707769453654

# T_w_c = np.zeros((4,4))
# T_w_c[0:3,0:3] = qt2rot([0.00245872719276, -0.0116551044236, -0.706343056648, 0.707769453654])
# T_w_c[:,3] = [-0.0460639849005, 0.02830395155, 0.0150360841392, 1]
# print(qt2rot([0.00245872719276, -0.0116551044236, -0.706343056648, 0.707769453654]))
# print(T_w_c)
# T_l_c = np.zeros((4,4))
# T_l_c[0:3,0:3] = qt2rot([-0.00109339749906, -0.00222371635027, 0.00223722727969, 0.999994397163])
# T_l_c[:,3] = [0.000103043632407,  0.0147619768977,  -0.00030322643579, 1]
# print(T_l_c)
# T_w_l = T_w_c.dot(np.linalg.inv(T_l_c))
# print(T_w_l)
# print(T_w_l[0:3,3])
# print(rot2qt(T_w_l[0:3,0:3]))
# T_w_l = np.asarray([[0,-1,0,0],[1,0,0,0],[0,0,1,0],[0,0,0,1]]).dot(T_w_l)
# print(T_w_l)
# print(rot2qt(T_w_l[0:3,0:3].dot(np.asarray([[0,0,-1],[0,1,0],[1,0,0]])).dot(np.asarray([[1,0,0],[0,-1,0],[0,0,-1]]))))
print(rot2qt(np.asarray([[0,-0.8,0.6],[-1,0,0],[0,-0.6,-0.8]])))
print(qt2rot([-0.7010573846499781, 0.7010573846499781, -0.09229595564125723, 0.09229595564125723]))
print(rot2rpy(np.asarray([[0,-0.8,0.6],[-1,0,0],[0,-0.6,-0.8]])))
