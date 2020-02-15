cmake_minimum_required(VERSION 2.8.3)
project(hello_world)

find_package(catkin REQUIRED roscpp std_msgs message_generation turtlesim   tf)


add_service_files(
  FILES
  Add.srv
)

generate_messages(
  DEPENDENCIES
  std_msgs
)


catkin_package(
 CATKIN_DEPENDS 
)


include_directories(
${catkin_INCLUDE_DIRS}
)


add_executable(my_hello_world src/my_hello_world.cpp)
target_link_libraries(my_hello_world ${catkin_LIBRARIES})

add_executable(publish_node src/publish_node.cpp)
target_link_libraries(publish_node ${catkin_LIBRARIES})

add_executable(subscribe_node src/subscribe_node.cpp)
target_link_libraries(subscribe_node ${catkin_LIBRARIES})

add_executable(server_node src/server_node.cpp)
target_link_libraries(server_node ${catkin_LIBRARIES})
add_dependencies(server_node service_example_gencpp)

add_executable(client_node src/client_node.cpp)
target_link_libraries(client_node ${catkin_LIBRARIES})
add_dependencies(client_node service_example_gencpp)

add_executable(turtle_tf_broadcaster src/turtle_tf_broadcaster.cpp)
target_link_libraries(turtle_tf_broadcaster ${catkin_LIBRARIES})

add_executable(turtle_tf_listener src/turtle_tf_listener.cpp)
target_link_libraries(turtle_tf_listener ${catkin_LIBRARIES})

add_executable(frame_tf_broadcaster src/frame_tf_broadcaster.cpp)
target_link_libraries(frame_tf_broadcaster ${catkin_LIBRARIES})

