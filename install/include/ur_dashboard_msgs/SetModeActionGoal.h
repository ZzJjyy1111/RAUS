// Generated by gencpp from file ur_dashboard_msgs/SetModeActionGoal.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_SETMODEACTIONGOAL_H
#define UR_DASHBOARD_MSGS_MESSAGE_SETMODEACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <ur_dashboard_msgs/SetModeGoal.h>

namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct SetModeActionGoal_
{
  typedef SetModeActionGoal_<ContainerAllocator> Type;

  SetModeActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  SetModeActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::ur_dashboard_msgs::SetModeGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SetModeActionGoal_

typedef ::ur_dashboard_msgs::SetModeActionGoal_<std::allocator<void> > SetModeActionGoal;

typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeActionGoal > SetModeActionGoalPtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeActionGoal const> SetModeActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0012d5645be9adc78c7732326d965640";
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0012d5645be9adc7ULL;
  static const uint64_t static_value2 = 0x8c7732326d965640ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/SetModeActionGoal";
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"SetModeGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ur_dashboard_msgs/SetModeGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# This action is for setting the robot into a desired mode (e.g. RUNNING) and safety mode into a\n"
"# non-critical state (e.g. NORMAL or REDUCED), for example after a safety incident happened.\n"
"\n"
"# goal\n"
"ur_dashboard_msgs/RobotMode target_robot_mode\n"
"\n"
"# Stop program execution before restoring the target mode. Can be used together with 'play_program'.\n"
"bool stop_program\n"
"\n"
"# Play the currently loaded program after target mode is reached.#\n"
"# NOTE: Requesting mode RUNNING in combination with this will make the robot continue the motion it\n"
"# was doing before. This might probably lead into the same problem (protective stop, EM-Stop due to\n"
"# faulty motion, etc.) If you want to be safe, set the 'stop_program' flag below and manually play\n"
"# the program after robot state is returned to normal.\n"
"# This flag will only be used when requesting mode RUNNING\n"
"bool play_program\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ur_dashboard_msgs/RobotMode\n"
"int8 NO_CONTROLLER=-1\n"
"int8 DISCONNECTED=0\n"
"int8 CONFIRM_SAFETY=1\n"
"int8 BOOTING=2\n"
"int8 POWER_OFF=3\n"
"int8 POWER_ON=4\n"
"int8 IDLE=5\n"
"int8 BACKDRIVE=6\n"
"int8 RUNNING=7\n"
"int8 UPDATING_FIRMWARE=8\n"
"\n"
"int8 mode\n"
"\n"
;
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetModeActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::SetModeActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::ur_dashboard_msgs::SetModeGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_SETMODEACTIONGOAL_H
