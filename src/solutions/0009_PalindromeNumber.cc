#include "solution.h"

bool Solution::isPalindrome(int x)
{
  // No need to push the value to vector, just use int.
  // And no need to know the length of x, just compare the reverted number with x.

  // Special cases:
  // when x < 0, x is not a palindrome.
  // Also if the last digit of the number is 0, in order to be a palindrome,
  // the first digit of the number also needs to be 0.
  // Only 0 satisfy this property.
  if (x < 0 || (x != 0 && x % 10 == 0))
    return false;

  // Since we divided the number by 10, and multiplied the reversed number by 10, when the original number is
  // less than the reversed number, it means we've processed half of the number digits.
  int revertedNumber = 0;
  while (x > revertedNumber)
  {
    revertedNumber = revertedNumber * 10 + x % 10;
    x /= 10;
  }

  // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
  // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
  // since the middle digit doesn't matter in palidrome(it will always equal to itself),
  // we can simply get rid of it.
  return (x == revertedNumber) || (x == revertedNumber / 10);
}
