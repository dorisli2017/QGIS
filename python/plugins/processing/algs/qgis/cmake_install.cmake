# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/algs/qgis" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/AddTableField.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Aggregate.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Aspect.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/BarPlot.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/BasicStatistics.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/BoxPlot.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Buffer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/CheckValidity.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ConcaveHull.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/CreateAttributeIndex.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/CreateConstantRaster.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Datasources2Vrt.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/DefineProjection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Delaunay.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/DeleteColumn.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/DeleteDuplicateGeometries.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/DensifyGeometries.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/EliminateSelection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ExecuteSQL.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ExportGeometryInfo.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ExtentFromLayer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ExtractSpecificVertices.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/FieldPyculator.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/FieldsCalculator.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/FieldsMapper.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/FindProjection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/GeometryByExpression.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/GeometryConvert.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Grid.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Heatmap.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Hillshade.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/HubDistanceLines.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/HubDistancePoints.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/HypsometricCurves.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/IdwInterpolation.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ImportIntoPostGIS.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ImportIntoSpatialite.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/KNearestConcaveHull.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/KeepNBiggestParts.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/LinesToPolygons.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/MeanAndStdDevPlot.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/MinimumBoundingGeometry.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/NearestNeighbourAnalysis.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Orthogonalize.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointDistance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsAlongGeometry.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsDisplacement.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsFromLines.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsFromPolygons.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsInPolygon.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsLayerFromTable.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PointsToPaths.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PolarPlot.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PoleOfInaccessibility.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Polygonize.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PostGISExecuteAndLoadSQL.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/PostGISExecuteSQL.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/QgisAlgorithm.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/QgisAlgorithmProvider.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomExtract.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomExtractWithinSubsets.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomPointsAlongLines.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomPointsExtent.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomPointsLayer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomPointsPolygons.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomSelection.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RandomSelectionWithinSubsets.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RasterCalculator.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RasterLayerHistogram.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RasterLayerStatistics.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RasterSampling.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Rasterize.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RectanglesOvalsDiamondsFixed.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RectanglesOvalsDiamondsVariable.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/RegularPoints.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Relief.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Ruggedness.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SelectByAttribute.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SelectByExpression.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ServiceAreaFromLayer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ServiceAreaFromPoint.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SetMValue.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SetRasterStyle.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SetVectorStyle.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SetZValue.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SingleSidedBuffer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/Slope.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SnapGeometries.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SpatialIndex.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SpatialJoin.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SpatialJoinSummary.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SpatialiteExecuteSQL.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/StatisticsByCategories.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/SumLines.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/TextToFloat.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/TilesXYZ.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/TinInterpolation.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/TopoColors.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/TruncateTable.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/UniqueValues.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VariableDistanceBuffer.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VectorLayerHistogram.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VectorLayerScatterplot.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VectorLayerScatterplot3D.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VectorSplit.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/VoronoiPolygons.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ZonalStatistics.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/voronoi.py"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/qgis/ui/cmake_install.cmake")

endif()

