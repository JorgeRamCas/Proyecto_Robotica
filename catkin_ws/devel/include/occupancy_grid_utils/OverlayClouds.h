// Generated by gencpp from file occupancy_grid_utils/OverlayClouds.msg
// DO NOT EDIT!


#ifndef OCCUPANCY_GRID_UTILS_MESSAGE_OVERLAYCLOUDS_H
#define OCCUPANCY_GRID_UTILS_MESSAGE_OVERLAYCLOUDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/OccupancyGrid.h>

namespace occupancy_grid_utils
{
template <class ContainerAllocator>
struct OverlayClouds_
{
  typedef OverlayClouds_<ContainerAllocator> Type;

  OverlayClouds_()
    : grid()
    , frame_id()
    , occupancy_threshold(0.0)
    , max_distance(0.0)
    , min_pass_through(0.0)
    , hit_counts()
    , pass_through_counts()  {
    }
  OverlayClouds_(const ContainerAllocator& _alloc)
    : grid(_alloc)
    , frame_id(_alloc)
    , occupancy_threshold(0.0)
    , max_distance(0.0)
    , min_pass_through(0.0)
    , hit_counts(_alloc)
    , pass_through_counts(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::OccupancyGrid_<ContainerAllocator>  _grid_type;
  _grid_type grid;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_id_type;
  _frame_id_type frame_id;

   typedef float _occupancy_threshold_type;
  _occupancy_threshold_type occupancy_threshold;

   typedef float _max_distance_type;
  _max_distance_type max_distance;

   typedef float _min_pass_through_type;
  _min_pass_through_type min_pass_through;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _hit_counts_type;
  _hit_counts_type hit_counts;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _pass_through_counts_type;
  _pass_through_counts_type pass_through_counts;





  typedef boost::shared_ptr< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> const> ConstPtr;

}; // struct OverlayClouds_

typedef ::occupancy_grid_utils::OverlayClouds_<std::allocator<void> > OverlayClouds;

typedef boost::shared_ptr< ::occupancy_grid_utils::OverlayClouds > OverlayCloudsPtr;
typedef boost::shared_ptr< ::occupancy_grid_utils::OverlayClouds const> OverlayCloudsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator1> & lhs, const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator2> & rhs)
{
  return lhs.grid == rhs.grid &&
    lhs.frame_id == rhs.frame_id &&
    lhs.occupancy_threshold == rhs.occupancy_threshold &&
    lhs.max_distance == rhs.max_distance &&
    lhs.min_pass_through == rhs.min_pass_through &&
    lhs.hit_counts == rhs.hit_counts &&
    lhs.pass_through_counts == rhs.pass_through_counts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator1> & lhs, const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace occupancy_grid_utils

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1dfac662600ca9b91b434a76485a5d9";
  }

  static const char* value(const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1dfac662600ca9bULL;
  static const uint64_t static_value2 = 0x91b434a76485a5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "occupancy_grid_utils/OverlayClouds";
  }

  static const char* value(const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/OccupancyGrid grid\n"
"string frame_id\n"
"float32 occupancy_threshold\n"
"float32 max_distance\n"
"float32 min_pass_through\n"
"int32[] hit_counts\n"
"int32[] pass_through_counts\n"
"================================================================================\n"
"MSG: nav_msgs/OccupancyGrid\n"
"# This represents a 2-D grid map, in which each cell represents the probability of\n"
"# occupancy.\n"
"\n"
"Header header \n"
"\n"
"#MetaData for the map\n"
"MapMetaData info\n"
"\n"
"# The map data, in row-major order, starting with (0,0).  Occupancy\n"
"# probabilities are in the range [0,100].  Unknown is -1.\n"
"int8[] data\n"
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
"MSG: nav_msgs/MapMetaData\n"
"# This hold basic information about the characterists of the OccupancyGrid\n"
"\n"
"# The time at which the map was loaded\n"
"time map_load_time\n"
"# The map resolution [m/cell]\n"
"float32 resolution\n"
"# Map width [cells]\n"
"uint32 width\n"
"# Map height [cells]\n"
"uint32 height\n"
"# The origin of the map [m, m, rad].  This is the real-world pose of the\n"
"# cell (0,0) in the map.\n"
"geometry_msgs/Pose origin\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grid);
      stream.next(m.frame_id);
      stream.next(m.occupancy_threshold);
      stream.next(m.max_distance);
      stream.next(m.min_pass_through);
      stream.next(m.hit_counts);
      stream.next(m.pass_through_counts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OverlayClouds_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::occupancy_grid_utils::OverlayClouds_<ContainerAllocator>& v)
  {
    s << indent << "grid: ";
    s << std::endl;
    Printer< ::nav_msgs::OccupancyGrid_<ContainerAllocator> >::stream(s, indent + "  ", v.grid);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame_id);
    s << indent << "occupancy_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.occupancy_threshold);
    s << indent << "max_distance: ";
    Printer<float>::stream(s, indent + "  ", v.max_distance);
    s << indent << "min_pass_through: ";
    Printer<float>::stream(s, indent + "  ", v.min_pass_through);
    s << indent << "hit_counts[]" << std::endl;
    for (size_t i = 0; i < v.hit_counts.size(); ++i)
    {
      s << indent << "  hit_counts[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.hit_counts[i]);
    }
    s << indent << "pass_through_counts[]" << std::endl;
    for (size_t i = 0; i < v.pass_through_counts.size(); ++i)
    {
      s << indent << "  pass_through_counts[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.pass_through_counts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCCUPANCY_GRID_UTILS_MESSAGE_OVERLAYCLOUDS_H
