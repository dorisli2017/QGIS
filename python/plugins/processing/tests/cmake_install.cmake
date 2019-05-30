# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/tests" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/AlgorithmsTestBase.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/CheckValidityAlgorithm.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/GdalAlgorithmsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/Grass7AlgorithmsImageryTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/Grass7AlgorithmsRasterTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/Grass7AlgorithmsVectorTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/GuiTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/ModelerTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/OtbAlgorithmsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/ProcessingGeneralTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/ProjectProvider.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/QgisAlgorithmsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/SagaAlgorithmsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/ScriptUtilsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/TestData.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/ToolsTest.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/__init__.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/tests/testdata" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/testdata/points.gfs"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/testdata/points.gml"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/tests/testdata/table.dbf"
    )
endif()

