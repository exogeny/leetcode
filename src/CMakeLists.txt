# Just use the FILE(GLOB ...) for wildcard solutions folder
FILE(GLOB SOLUTIONS "solutions/*.cc")

ADD_LIBRARY(solution    support.cc
                        solution.cc
                        ${SOLUTIONS})
