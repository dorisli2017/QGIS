# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/gui" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/AlgorithmDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/AlgorithmDialogBase.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/AlgorithmExecutor.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/AlgorithmLocatorFilter.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/AutofillDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/BatchAlgorithmDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/BatchInputSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/BatchOutputSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/BatchPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/CheckboxesPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ConfigDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ContextAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/DestinationSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/DirectorySelectorDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/EditRenderingStylesDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ExtentSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/FileSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/FixedTableDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/FixedTablePanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/Help2Html.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/HelpEditionDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/HistoryDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ListMultiselectWidget.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/MessageBarProgress.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/MessageDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/MultipleFileInputDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/MultipleInputDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/MultipleInputPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/NumberInputPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ParameterGuiUtils.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ParametersPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/PointMapTool.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/PointSelectionPanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/PostgisTableSelector.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/Postprocessing.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ProcessingToolbox.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ProviderActions.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/RangePanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/RectangleMapTool.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/RenderingStyleFilePanel.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/RenderingStyles.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ResultsDock.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/TestTools.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/ToolboxAction.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/enummodelerwidget.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/matrixmodelerwidget.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/menus.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/wrappers.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/wrappers_map_theme.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/wrappers_postgis.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/CMakeLists.txt"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/gui/algnames.txt"
    )
endif()

