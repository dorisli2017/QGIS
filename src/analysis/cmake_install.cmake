# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/src/analysis

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qgis" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/qgsanalysis.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/processing/qgsalgorithmimportphotos.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/processing/qgsreclassifyutils.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsalignraster.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsaspectfilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsderivativefilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsexiftools.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgshillshadefilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgskde.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsninecellfilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsrastercalculator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsrelief.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsruggednessfilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsslopefilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsrastermatrix.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgsrastercalcnode.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/raster/qgstotalcurvaturefilter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/mesh/qgsmeshcalcnode.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/mesh/qgsmeshcalculator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/mesh/qgsmeshcalcutils.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/mersenne-twister.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/qgsgeometrysnapper.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/qgsgeometrysnappersinglesource.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/qgszonalstatistics.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycheckerutils.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsfeaturepool.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsvectordataproviderfeaturepool.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/qgsinterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/qgsgridfilewriter.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/qgsidwinterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/qgstininterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/Bezier3D.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/ParametricLine.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/CloughTocherInterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/TriangleInterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/Vector3D.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/DualEdgeTriangulation.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/MathUtils.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/TriDecorator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/Triangulation.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/HalfEdge.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/LinTriangleInterpolator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/interpolation/NormVecDecorator.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsgraph.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsgraphbuilderinterface.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsgraphbuilder.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsnetworkstrategy.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsnetworkspeedstrategy.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsnetworkdistancestrategy.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsgraphanalyzer.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/network/qgsvectorlayerdirector.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryanglecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryareacheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrychecker.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycheckerror.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycheckcontext.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgssinglegeometrycheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycontainedcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrydanglecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrydegeneratepolygoncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryduplicatecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryduplicatenodescheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryfollowboundariescheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryholecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrylineintersectioncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrylinelayerintersectioncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrymultipartcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryoverlapcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrypointcoveredbylinecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrypointinpolygoncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrysegmentlengthcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryselfcontactcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryselfintersectioncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrysliverpolygoncheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrytypecheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgssinglegeometrycheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometryisvalidcheck.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycheckregistry.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/vector/geometry_checker/qgsgeometrycheckfactory.h"
    "/home/guangping/dev/cpp/GIT/QGIS/src/analysis/qgis_analysis.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqgis_analysis.so.3.7.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqgis_analysis.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/guangping/dev/cpp/GIT/QGIS/output/lib/libqgis_analysis.so.3.7.0"
    "/home/guangping/dev/cpp/GIT/QGIS/output/lib/libqgis_analysis.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqgis_analysis.so.3.7.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqgis_analysis.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/guangping/dev/cpp/GIT/QGIS/src/core:/home/guangping/dev/cpp/GIT/QGIS/src/gui:/home/guangping/dev/cpp/GIT/QGIS/output/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

