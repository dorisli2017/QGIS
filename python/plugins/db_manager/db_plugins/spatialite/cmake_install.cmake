# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/db_manager/db_plugins/spatialite" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/connector.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/data_model.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/info_model.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/plugin.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/db_manager/db_plugins/spatialite/sql_dictionary.py"
    )
endif()

