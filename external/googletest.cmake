include(ExternalProject)

set(googletest_INCLUDE_DIRS ${CMAKE_CURRENT_BINARY_DIR}/googletest/src/googletest/googletest/include)
set(googletest_URL https://github.com/google/googletest.git)
set(googletest_BUILD ${CMAKE_CURRENT_BINARY_DIR}/googletest)
set(googletest_TAG 150613166524c474a8a97df4c01d46b72050c495)

if (WIN32)
  set(googletest_LIBRARIES_FOLDER
      ${CMAKE_CURRENT_BINARY_DIR}/googletest/src/googletest/lib/$(Configuration)/)
  set(googletest_SUFFIX lib)
else()
  set(googletest_LIBRARIES_FOLDER
      ${CMAKE_CURRENT_BINARY_DIR}/googletest/src/googletest/lib/lib)
  set(googletest_SUFFIX a)
endif()

ExternalProject_Add(googletest
    PREFIX googletest
    GIT_REPOSITORY ${googletest_URL}
    GIT_TAG ${googletest_TAG}
    DOWNLOAD_DIR "${DOWNLOAD_LOCATION}"
    BUILD_IN_SOURCE 1
    BUILD_BYPRODUCTS ${googletest_STATIC_LIBRARIES}
    INSTALL_COMMAND ""
    CMAKE_CACHE_ARGS
        -DCMAKE_BUILD_TYPE:STRING=${CMAKE_BUILD_TYPE}
        -DBUILD_GMOCK:BOOL=OFF
        -DBUILD_GTEST:BOOL=ON
        -Dgtest_force_shared_crt:BOOL=ON)