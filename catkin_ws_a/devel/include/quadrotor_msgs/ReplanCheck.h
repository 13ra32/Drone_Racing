// Generated by gencpp from file quadrotor_msgs/ReplanCheck.msg
// DO NOT EDIT!


#ifndef QUADROTOR_MSGS_MESSAGE_REPLANCHECK_H
#define QUADROTOR_MSGS_MESSAGE_REPLANCHECK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace quadrotor_msgs
{
template <class ContainerAllocator>
struct ReplanCheck_
{
  typedef ReplanCheck_<ContainerAllocator> Type;

  ReplanCheck_()
    : header()
    , start_velocity()
    , start_acceleration()
    , plan_points()
    , check_points()
    , stop_velocity()
    , stop_acceleration()
    , replan_time_length(0.0)
    , check_points_time_interval(0.0)
    , plan_points_time_interval(0.0)
    , trajectory_id(0)
    , replan_to_global_time(0.0)  {
    }
  ReplanCheck_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , start_velocity(_alloc)
    , start_acceleration(_alloc)
    , plan_points(_alloc)
    , check_points(_alloc)
    , stop_velocity(_alloc)
    , stop_acceleration(_alloc)
    , replan_time_length(0.0)
    , check_points_time_interval(0.0)
    , plan_points_time_interval(0.0)
    , trajectory_id(0)
    , replan_to_global_time(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _start_velocity_type;
  _start_velocity_type start_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _start_acceleration_type;
  _start_acceleration_type start_acceleration;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _plan_points_type;
  _plan_points_type plan_points;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _check_points_type;
  _check_points_type check_points;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _stop_velocity_type;
  _stop_velocity_type stop_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _stop_acceleration_type;
  _stop_acceleration_type stop_acceleration;

   typedef double _replan_time_length_type;
  _replan_time_length_type replan_time_length;

   typedef double _check_points_time_interval_type;
  _check_points_time_interval_type check_points_time_interval;

   typedef double _plan_points_time_interval_type;
  _plan_points_time_interval_type plan_points_time_interval;

   typedef uint32_t _trajectory_id_type;
  _trajectory_id_type trajectory_id;

   typedef double _replan_to_global_time_type;
  _replan_to_global_time_type replan_to_global_time;





  typedef boost::shared_ptr< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> const> ConstPtr;

}; // struct ReplanCheck_

typedef ::quadrotor_msgs::ReplanCheck_<std::allocator<void> > ReplanCheck;

typedef boost::shared_ptr< ::quadrotor_msgs::ReplanCheck > ReplanCheckPtr;
typedef boost::shared_ptr< ::quadrotor_msgs::ReplanCheck const> ReplanCheckConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace quadrotor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'quadrotor_msgs': ['/home/ralexander/catkin_ws_a/src/ground_station/utils/quadrotor_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a31f08865d3c08f64743e11538e9c4b";
  }

  static const char* value(const ::quadrotor_msgs::ReplanCheck_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a31f08865d3c08fULL;
  static const uint64_t static_value2 = 0x64743e11538e9c4bULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quadrotor_msgs/ReplanCheck";
  }

  static const char* value(const ::quadrotor_msgs::ReplanCheck_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
geometry_msgs/Vector3 start_velocity\n\
geometry_msgs/Vector3 start_acceleration\n\
geometry_msgs/Point[] plan_points\n\
geometry_msgs/Point[] check_points\n\
geometry_msgs/Vector3 stop_velocity\n\
geometry_msgs/Vector3 stop_acceleration\n\
float64               replan_time_length\n\
float64               check_points_time_interval\n\
float64               plan_points_time_interval\n\
uint32                trajectory_id\n\
float64               replan_to_global_time\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::quadrotor_msgs::ReplanCheck_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.start_velocity);
      stream.next(m.start_acceleration);
      stream.next(m.plan_points);
      stream.next(m.check_points);
      stream.next(m.stop_velocity);
      stream.next(m.stop_acceleration);
      stream.next(m.replan_time_length);
      stream.next(m.check_points_time_interval);
      stream.next(m.plan_points_time_interval);
      stream.next(m.trajectory_id);
      stream.next(m.replan_to_global_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReplanCheck_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrotor_msgs::ReplanCheck_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrotor_msgs::ReplanCheck_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "start_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.start_velocity);
    s << indent << "start_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.start_acceleration);
    s << indent << "plan_points[]" << std::endl;
    for (size_t i = 0; i < v.plan_points.size(); ++i)
    {
      s << indent << "  plan_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.plan_points[i]);
    }
    s << indent << "check_points[]" << std::endl;
    for (size_t i = 0; i < v.check_points.size(); ++i)
    {
      s << indent << "  check_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.check_points[i]);
    }
    s << indent << "stop_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.stop_velocity);
    s << indent << "stop_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.stop_acceleration);
    s << indent << "replan_time_length: ";
    Printer<double>::stream(s, indent + "  ", v.replan_time_length);
    s << indent << "check_points_time_interval: ";
    Printer<double>::stream(s, indent + "  ", v.check_points_time_interval);
    s << indent << "plan_points_time_interval: ";
    Printer<double>::stream(s, indent + "  ", v.plan_points_time_interval);
    s << indent << "trajectory_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.trajectory_id);
    s << indent << "replan_to_global_time: ";
    Printer<double>::stream(s, indent + "  ", v.replan_to_global_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUADROTOR_MSGS_MESSAGE_REPLANCHECK_H