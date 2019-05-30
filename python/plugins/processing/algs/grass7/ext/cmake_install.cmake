# Install script for directory: /home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/python/plugins/processing/algs/grass7/ext" TYPE FILE FILES
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/__init__.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_albedo.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_cca.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_cluster.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_colors_enhance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_evapo_mh.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_gensig.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_gensigset.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_group.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_in_spotvgt.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_landsat_acca.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_landsat_toar.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_maxlik.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_oif.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_pansharpen.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_pca.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_segment.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_smap.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/i_tasscap.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_blend_combine.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_blend_rgb.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_category.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_colors.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_colors_stddev.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_drain.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_horizon.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_cwed.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_cwed_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_dominance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_dominance_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_edgedensity.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_edgedensity_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_mpa.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_mpa_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_mps.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_mps_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padcv.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padcv_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padrange.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padrange_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padsd.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_padsd_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_patchdensity.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_patchdensity_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_patchnum.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_patchnum_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_pielou.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_pielou_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_renyi.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_renyi_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_richness.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_richness_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_shannon.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_shannon_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_shape.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_shape_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_simpson.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_li_simpson_ascii.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_mask_rast.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_mask_vect.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_null.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_proj.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_reclass.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_resamp_filter.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_rgb.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_series_interp.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_shade.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_statistics.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_stats_quantile_rast.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/r_what_color.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_distance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_edit.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_extrude.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_in_geonames.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_alloc.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_allpairs.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_bridge.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_centrality.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_components.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_connectivity.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_distance.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_flow.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_iso.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_path.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_salesman.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_spanningtree.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_steiner.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_net_visibility.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_proj.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_rast_stats.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_rectify.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_sample.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_to_3d.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_vect_stats.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_voronoi.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_what_rast.py"
    "/home/guangping/dev/cpp/GIT/QGIS/python/plugins/processing/algs/grass7/ext/v_what_vect.py"
    )
endif()

