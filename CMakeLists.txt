cmake_minimum_required(VERSION 3.13.0)

find_package(OGRE REQUIRED COMPONENTS Bites RTShaderSystem CONFIG)

include(variables.cmake)

include_directories(${SAMPLES_HEADERS})

add_executable(selfLearning selfLearning.cpp)

target_link_libraries(selfLearning OgreMain OgreBites OgreRTShaderSystem )
