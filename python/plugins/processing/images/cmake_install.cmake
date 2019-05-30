# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/./images" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/dem.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/interpolation.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/iterate.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/menu.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/namespace.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/postgis.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/zonalstats.png"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/delete.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/edit.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/input.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/minus.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/networkanalysis.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/output.svg"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/plus.svg"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/images/gdaltools/cmake_install.cmake")

endif()

