# Leetcode solution

This reposity is a note for solution of leetcode.

![CI With Bazel](https://github.com/TerenceWangh/leetcode/workflows/CI%20With%20Bazel/badge.svg?branch=master)


## How to work?
I wrote the code and arrange them by CMake.
**No main function** exists, the results is a shared library, so you can test it easily by writing any code you want.
I add the **GTest library** for unit test, so the test folder will generate the execuation file for unit test. The default test case is given by the leetcode description, and you can add the test case by yourself.

## Requirements
I test my code only on the linux and windows, so I have no idea about other platform.
**Now support the bazel builder**.

* [CMake](https://cmake.org/)
* [Bazel](https://bazel.build/)
* [GTest](https://github.com/abseil/googletest)

### Linux Requirements
* A C++11-standard-compliant compiler

### Windows Requirements
* Microsoft Visual C++ 2015 or newer

## Problem Lists
Please click [Problem Lists](doc/README.md) for details.
