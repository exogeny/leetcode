#include "solution.h"
#include <algorithm>

using std::vector;

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
  int imin, imax, i, j, halfLen;
  int m = nums1.size();
  int n = nums2.size();
  vector<int> A = vector<int>(m > n ? nums1 : nums2);
  vector<int> B = vector<int>(m > n ? nums2 : nums1);
  if (m > n)
  {
    m = m + n;
    n = m - n;
    m = m - n;
  }
  imin = 0;
  imax = m;
  halfLen = (m + n + 1) / 2;
  while (imin <= imax)
  {
    i = (imin + imax) / 2;
    j = halfLen - i;
    std::cout << "imin = " << imin << ", imax = " << imax << "\n";
    std::cout << "i = " << i << ", j = " << j << "\n";
    if (i < imax && B[j - 1] > A[i])
      imin = imin + 1;
    else if (i > imin && A[i - 1] > B[j])
      imax = imax - 1;
    else
    {
      int maxLeft = 0;
      if (i == 0)
        maxLeft = B[j - 1];
      else if (j == 0)
        maxLeft = A[i - 1];
      else
        maxLeft = std::max(A[i - 1], B[j - 1]);
      if ((m + n) % 2 == 1)
        return maxLeft;

      int minRight = 0;
      if (i == m)
        minRight = B[j];
      else if (j == n)
        minRight = A[i];
      else
        minRight = std::min(B[j], A[i]);

      return (maxLeft + minRight) / 2.0;
    }
  }
  return 0.0;
}
