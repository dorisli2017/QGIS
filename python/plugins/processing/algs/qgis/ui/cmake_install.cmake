# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/./algs/qgis/ui" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/AggregatesPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/ExecuteSQLWidget.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/FieldsCalculatorDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/FieldsMappingPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/HeatmapWidgets.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/InterpolationWidgets.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/RasterCalculatorWidgets.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/ReliefColorsWidget.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/AddNewExpressionDialog.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/DlgFieldsCalculator.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/ExecuteSQLWidgetBase.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/PredefinedExpressionDialog.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/RasterCalculatorWidget.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/RasterResolutionWidget.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/fieldsmappingpanelbase.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/interpolationdatawidgetbase.ui"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/reliefcolorswidgetbase.ui"
    )
endif()

