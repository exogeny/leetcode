#ifndef _CHALLENGE_H_
#define _CHALLENGE_H_

#include <gtest/gtest.h>

#ifdef CHALLENGE_TEST
#undef CHALLENGE_TEST
#endif

#define CHALLENGE_TEST(test_name) TEST(CHALLENGE, test_name)

#endif
