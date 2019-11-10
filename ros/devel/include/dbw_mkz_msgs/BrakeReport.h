// Generated by gencpp from file dbw_mkz_msgs/BrakeReport.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_BRAKEREPORT_H
#define DBW_MKZ_MSGS_MESSAGE_BRAKEREPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <dbw_mkz_msgs/WatchdogCounter.h>

namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct BrakeReport_
{
  typedef BrakeReport_<ContainerAllocator> Type;

  BrakeReport_()
    : header()
    , pedal_input(0.0)
    , pedal_cmd(0.0)
    , pedal_output(0.0)
    , torque_input(0.0)
    , torque_cmd(0.0)
    , torque_output(0.0)
    , boo_input(false)
    , boo_cmd(false)
    , boo_output(false)
    , enabled(false)
    , override(false)
    , driver(false)
    , timeout(false)
    , watchdog_counter()
    , watchdog_braking(false)
    , fault_wdc(false)
    , fault_ch1(false)
    , fault_ch2(false)
    , fault_power(false)  {
    }
  BrakeReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pedal_input(0.0)
    , pedal_cmd(0.0)
    , pedal_output(0.0)
    , torque_input(0.0)
    , torque_cmd(0.0)
    , torque_output(0.0)
    , boo_input(false)
    , boo_cmd(false)
    , boo_output(false)
    , enabled(false)
    , override(false)
    , driver(false)
    , timeout(false)
    , watchdog_counter(_alloc)
    , watchdog_braking(false)
    , fault_wdc(false)
    , fault_ch1(false)
    , fault_ch2(false)
    , fault_power(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _pedal_input_type;
  _pedal_input_type pedal_input;

   typedef float _pedal_cmd_type;
  _pedal_cmd_type pedal_cmd;

   typedef float _pedal_output_type;
  _pedal_output_type pedal_output;

   typedef float _torque_input_type;
  _torque_input_type torque_input;

   typedef float _torque_cmd_type;
  _torque_cmd_type torque_cmd;

   typedef float _torque_output_type;
  _torque_output_type torque_output;

   typedef uint8_t _boo_input_type;
  _boo_input_type boo_input;

   typedef uint8_t _boo_cmd_type;
  _boo_cmd_type boo_cmd;

   typedef uint8_t _boo_output_type;
  _boo_output_type boo_output;

   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef uint8_t _override_type;
  _override_type override;

   typedef uint8_t _driver_type;
  _driver_type driver;

   typedef uint8_t _timeout_type;
  _timeout_type timeout;

   typedef  ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator>  _watchdog_counter_type;
  _watchdog_counter_type watchdog_counter;

   typedef uint8_t _watchdog_braking_type;
  _watchdog_braking_type watchdog_braking;

   typedef uint8_t _fault_wdc_type;
  _fault_wdc_type fault_wdc;

   typedef uint8_t _fault_ch1_type;
  _fault_ch1_type fault_ch1;

   typedef uint8_t _fault_ch2_type;
  _fault_ch2_type fault_ch2;

   typedef uint8_t _fault_power_type;
  _fault_power_type fault_power;





  typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> const> ConstPtr;

}; // struct BrakeReport_

typedef ::dbw_mkz_msgs::BrakeReport_<std::allocator<void> > BrakeReport;

typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeReport > BrakeReportPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeReport const> BrakeReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/hussain/CarND-Capstone/ros/src/_dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a92bad28c400885f36170c1cab44618e";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa92bad28c400885fULL;
  static const uint64_t static_value2 = 0x36170c1cab44618eULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/BrakeReport";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Brake pedal\n\
# Unitless, range 0.15 to 0.50\n\
float32 pedal_input\n\
float32 pedal_cmd\n\
float32 pedal_output\n\
\n\
# Braking torque (Nm)\n\
float32 torque_input\n\
float32 torque_cmd\n\
float32 torque_output\n\
\n\
# Brake On Off (BOO), brake lights\n\
bool boo_input\n\
bool boo_cmd\n\
bool boo_output\n\
\n\
# Status\n\
bool enabled  # Enabled\n\
bool override # Driver override\n\
bool driver   # Driver activity\n\
bool timeout  # Command timeout\n\
\n\
# Watchdog Counter\n\
WatchdogCounter watchdog_counter\n\
bool watchdog_braking\n\
bool fault_wdc\n\
\n\
# Faults\n\
bool fault_ch1\n\
bool fault_ch2\n\
bool fault_power\n\
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
MSG: dbw_mkz_msgs/WatchdogCounter\n\
uint8 source\n\
\n\
uint8 NONE=0               # No source for watchdog counter fault\n\
uint8 OTHER_BRAKE=1        # Fault determined by brake controller\n\
uint8 OTHER_THROTTLE=2     # Fault determined by throttle controller\n\
uint8 OTHER_STEERING=3     # Fault determined by steering controller\n\
uint8 BRAKE_COUNTER=4      # Brake command counter failed to increment\n\
uint8 BRAKE_DISABLED=5     # Brake transition to disabled while in gear or moving\n\
uint8 BRAKE_COMMAND=6      # Brake command timeout after 100ms\n\
uint8 BRAKE_REPORT=7       # Brake report timeout after 100ms\n\
uint8 THROTTLE_COUNTER=8   # Throttle command counter failed to increment\n\
uint8 THROTTLE_DISABLED=9  # Throttle transition to disabled while in gear or moving\n\
uint8 THROTTLE_COMMAND=10  # Throttle command timeout after 100ms\n\
uint8 THROTTLE_REPORT=11   # Throttle report timeout after 100ms\n\
uint8 STEERING_COUNTER=12  # Steering command counter failed to increment\n\
uint8 STEERING_DISABLED=13 # Steering transition to disabled while in gear or moving\n\
uint8 STEERING_COMMAND=14  # Steering command timeout after 100ms\n\
uint8 STEERING_REPORT=15   # Steering report timeout after 100ms\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pedal_input);
      stream.next(m.pedal_cmd);
      stream.next(m.pedal_output);
      stream.next(m.torque_input);
      stream.next(m.torque_cmd);
      stream.next(m.torque_output);
      stream.next(m.boo_input);
      stream.next(m.boo_cmd);
      stream.next(m.boo_output);
      stream.next(m.enabled);
      stream.next(m.override);
      stream.next(m.driver);
      stream.next(m.timeout);
      stream.next(m.watchdog_counter);
      stream.next(m.watchdog_braking);
      stream.next(m.fault_wdc);
      stream.next(m.fault_ch1);
      stream.next(m.fault_ch2);
      stream.next(m.fault_power);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BrakeReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::BrakeReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pedal_input: ";
    Printer<float>::stream(s, indent + "  ", v.pedal_input);
    s << indent << "pedal_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.pedal_cmd);
    s << indent << "pedal_output: ";
    Printer<float>::stream(s, indent + "  ", v.pedal_output);
    s << indent << "torque_input: ";
    Printer<float>::stream(s, indent + "  ", v.torque_input);
    s << indent << "torque_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.torque_cmd);
    s << indent << "torque_output: ";
    Printer<float>::stream(s, indent + "  ", v.torque_output);
    s << indent << "boo_input: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.boo_input);
    s << indent << "boo_cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.boo_cmd);
    s << indent << "boo_output: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.boo_output);
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "override: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.override);
    s << indent << "driver: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driver);
    s << indent << "timeout: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timeout);
    s << indent << "watchdog_counter: ";
    s << std::endl;
    Printer< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >::stream(s, indent + "  ", v.watchdog_counter);
    s << indent << "watchdog_braking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.watchdog_braking);
    s << indent << "fault_wdc: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_wdc);
    s << indent << "fault_ch1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_ch1);
    s << indent << "fault_ch2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_ch2);
    s << indent << "fault_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_power);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_BRAKEREPORT_H