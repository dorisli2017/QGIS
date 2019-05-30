
SET(ENV{QGIS_PREFIX_PATH} "/home/guangping/dev/cpp/GIT/QGIS/output")
SET(ENV{LD_LIBRARY_PATH} "/home/guangping/dev/cpp/GIT/QGIS/output/lib:$ENV{LD_LIBRARY_PATH}")
SET(ENV{PYTHONPATH} "/home/guangping/dev/cpp/GIT/QGIS/output/python/:/home/guangping/dev/cpp/GIT/QGIS/output/python/plugins:/home/guangping/dev/cpp/GIT/QGIS/tests/src/python:$ENV{PYTHONPATH}")
MESSAGE("export LD_LIBRARY_PATH=$ENV{LD_LIBRARY_PATH}")

MESSAGE("export PYTHONPATH=$ENV{PYTHONPATH}")
MESSAGE(STATUS "Running  /usr/bin/python3 /home/guangping/dev/cpp/GIT/QGIS/tests/src/python/test_qgsfieldmodel.py ")
EXECUTE_PROCESS(
  COMMAND  /usr/bin/python3 /home/guangping/dev/cpp/GIT/QGIS/tests/src/python/test_qgsfieldmodel.py 
  RESULT_VARIABLE import_res
)
# Pass the output back to ctest
IF(import_res)
  MESSAGE(FATAL_ERROR "Test failed: ${import_res}")
ENDIF(import_res)
