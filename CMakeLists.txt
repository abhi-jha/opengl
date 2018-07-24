cmake_minimum_required(VERSION 3.10)
project(opengl)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 ")
#find_package (PkgConfig REQUIRED)
#find_package (OpenGL REQUIRED)
#find_package (GLUT REQUIRED)
set(GLEW_INCLUDE_DIR, "/home/user/Music/glew-2.1.0/include/")
set(GLEW_LIBRARY, "/home/user/Music/glew-2.1.0/lib/")

include_directories(${OPENGL_INCLUDE_DIR}  ${GLUT_INCLUDE_DIRS} {PROJECT_SOURCE_DIR})
file(GLOB SOURCE_FILES
        *.cpp
        *.h
        )

add_executable(opengl ${SOURCE_FILES})


#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
target_link_libraries (opengl ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} GL m GLU glut dl GLEW Xinerama Xrandr Xi Xcursor X11 Xxf86vm pthread)