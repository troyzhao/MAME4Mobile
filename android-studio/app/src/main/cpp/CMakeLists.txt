cmake_minimum_required(VERSION 3.4.1)

include_directories ("${PROJECT_SOURCE_DIR}/src/osd/droid-ios")

add_library( # Sets the name of the library.
        mame4droid-jni

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             mame4droid-jni.c )

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

find_library(dl-lib dl)

target_link_libraries( # Specifies the target library.
        mame4droid-jni

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} ${dl-lib} )