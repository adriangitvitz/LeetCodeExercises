#include "merge.h"

void merge(int *nums1, int nums1size, int m, int *nums2, int nums2size, int n) {
  if (nums1size != (m + n) || nums2size != n)
    return;
  int end1 = m - 1;
  int end2 = n - 1;
  int endnums1 = m + n - 1;
  for (int i = endnums1; i >= 0; i--) {
    if (end2 < 0)
      break;
    nums1[i] = (end1 >= 0 && nums1[end1] > nums2[end2]) ? nums1[end1--]
                                                        : nums2[end2--];
  }
}
