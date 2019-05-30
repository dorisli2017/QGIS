# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/./algs/gdal" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/AssignProjection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/Buffer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ClipRasterByExtent.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ClipRasterByMask.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ClipVectorByExtent.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ClipVectorByMask.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ColorRelief.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/Dissolve.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ExecuteSql.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GdalAlgorithm.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GdalAlgorithmDialog.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GdalAlgorithmProvider.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GdalUtils.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridAverage.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridDataMetrics.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridInverseDistance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridInverseDistanceNearestNeighbor.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridLinear.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/GridNearestNeighbor.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/OffsetCurve.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/OgrToPostGis.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/OneSideBuffer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/PointsAlongLines.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/aspect.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/buildvrt.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/contour.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/extractprojection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/fillnodata.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdal2tiles.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdal2xyz.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdaladdo.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdalcalc.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdalinfo.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/gdaltindex.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/hillshade.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/merge.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/nearblack.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ogr2ogr.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ogr2ogrtabletopostgislist.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ogr2ogrtopostgislist.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ogrinfo.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/pansharp.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/pct2rgb.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/polygonize.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/proximity.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/rasterize.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/rasterize_over.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/rearrange_bands.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/retile.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/rgb2pct.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/roughness.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/sieve.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/slope.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/tpi.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/translate.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/tri.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/warp.py"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/gdal/ui/cmake_install.cmake")

endif()

