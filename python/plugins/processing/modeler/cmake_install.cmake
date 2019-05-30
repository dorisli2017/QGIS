# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/modeler" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/AddModelFromFileAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/CreateNewModelAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/DeleteModelAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/EditModelAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ExportModelAsPythonScriptAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerAlgorithmProvider.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerArrowItem.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerGraphicItem.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerParameterDefinitionDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerParametersDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerScene.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ModelerUtils.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/MultilineTextPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/OpenModelFromFileAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/ProjectProvider.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/modeler/exceptions.py"
    )
endif()

