
# kill boolean warnings
CMAKE_POLICY(SET CMP0012 NEW)

IF(FALSE)
  MESSAGE(STATUS "Byte-compiling core Python utilities and plugins...")
  # exclude Python 3 modules in PyQt4.uic package
  EXECUTE_PROCESS(COMMAND /usr/bin/python3 -m compileall -q -x ".*uic.port_v3.*" "$ENV{DESTDIR}/usr/local/share/qgis/python")
ENDIF(FALSE)

set(ENV{QGIS_PREFIX_PATH} "$ENV{DESTDIR}/usr/local")
EXECUTE_PROCESS(COMMAND "/home/guangping/dev/cpp/GIT/QGIS/output/bin/crssync")
