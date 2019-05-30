# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/i18n

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/guangping/dev/cpp/GIT/QGIS/org.qgis.qgis.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/guangping/dev/cpp/GIT/QGIS/org.qgis.qgis.appdata.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/i18n" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ar.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_bg.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_bs.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ca.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_cs.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_da.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_de.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_el.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_eo.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_es.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_et.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_eu.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_fi.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_fr.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_gl.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_hi.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_hu.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_id.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_is.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_it.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ja.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_km.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ko.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ky.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_lt.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_lv.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_nb.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_nl.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_pl.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_pt_BR.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_pt_PT.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ro.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_ru.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_sl.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_sv.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_tr.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_uk.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_vi.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_zh-Hans.qm"
    "/home/guangping/dev/cpp/GIT/QGIS/output/i18n/qgis_zh-Hant.qm"
    )
endif()

