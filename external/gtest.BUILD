# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library

cc_library(
  name = "gtest-lib",
  srcs = glob(
    ["src/*.cc"],
    exclude = ["src/gtest-all.cc"]
  ),
  hdrs = glob([
    "include/**/*.h",
    "src/*.h"
  ]),
  copts = ["-Iexternal/gtest/include"],
  linkopts = ["-pthread"],
  visibility = ["//visibility:public"],
)