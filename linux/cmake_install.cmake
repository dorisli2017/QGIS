# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/linux

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE RENAME "qgis.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/apps" TYPE FILE RENAME "qgis.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis-icon-16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/apps" TYPE FILE RENAME "qgis.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis-icon-512x512.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/mimetypes" TYPE FILE RENAME "qgis-mime.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_mime_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/8x8/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon8x8.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon22x22.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon24x24.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon32x32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/36x36/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon36x36.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/42x42/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon42x42.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon48x48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon64x64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon72x72.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/80x80/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon80x80.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/96x96/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon96x96.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon128x128.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/192x192/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon192x192.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon256x256.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/mimetypes" TYPE FILE RENAME "qgis-mime.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons//qgis-mime-icon512x512.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/mimetypes" TYPE FILE RENAME "qgis_qgs.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_qgs_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/8x8/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs8x8.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs22x22.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs24x24.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs32x32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/36x36/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs36x36.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/42x42/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs42x42.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs48x48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs64x64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs72x72.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/80x80/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs80x80.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/96x96/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs96x96.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs128x128.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/192x192/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs192x192.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs256x256.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/mimetypes" TYPE FILE RENAME "qgis-qgs.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qgs512x512.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/mimetypes" TYPE FILE RENAME "qgis_qlr.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_qlr_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/8x8/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr8x8.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr22x22.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr24x24.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr32x32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/36x36/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr36x36.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/42x42/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr42x42.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr48x48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr64x64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr72x72.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/80x80/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr80x80.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/96x96/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr96x96.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr128x128.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/192x192/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr192x192.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr256x256.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/mimetypes" TYPE FILE RENAME "qgis-qlr.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qlr512x512.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/mimetypes" TYPE FILE RENAME "qgis_qml.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_qml_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/8x8/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml8x8.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml22x22.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml24x24.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml32x32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/36x36/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml36x36.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/42x42/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml42x42.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml48x48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml64x64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml72x72.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/80x80/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml80x80.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/96x96/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml96x96.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml128x128.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/192x192/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml192x192.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml256x256.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/mimetypes" TYPE FILE RENAME "qgis-qml.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qml512x512.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/mimetypes" TYPE FILE RENAME "qgis_qpt.svg" FILES "/home/guangping/dev/cpp/GIT/QGIS/images/icons/qgis_qpt_icon.svg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/8x8/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt8x8.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt16x16.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt22x22.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt24x24.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt32x32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/36x36/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt36x36.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/42x42/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt42x42.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt48x48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt64x64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt72x72.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/80x80/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt80x80.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/96x96/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt96x96.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt128x128.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/192x192/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt192x192.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt256x256.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/512x512/mimetypes" TYPE FILE RENAME "qgis-qpt.png" FILES "/home/guangping/dev/cpp/GIT/QGIS/linux/icons/qgis-qpt512x512.png")
endif()

