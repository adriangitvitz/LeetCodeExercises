#include <stdio.h>

void replace(int *x, int *y, int *end, int current) {
  *(x + current) = *(y + (*end)--);
}

// Beats: 100% - 0 ms, Memory: 6mb
void merge(int *nums1, int num1size, int m, int *nums2, int num2size, int n) {
    if (num1size != (m + n) || num2size != n) 
        return;
    int end1 = m - 1;
    int end2 = n - 1;
    int endnums1 = m + n - 1;
    for(int i = endnums1; i >= 0; i--) {
        if(end2 < 0) 
            break;
        nums1[i] = (end1 >= 0 && nums1[end1] > nums2[end2]) ? nums1[end1--] : nums2[end2--];
    }
}

// Beats: 32.85% - 7 ms, Memory: 6.3mb
// This is slow, since we are using repeated pointer arithmetic operations in a function call (replace)
// void merge(int *nums1, int num1size, int m, int *nums2, int num2size, int n) {
//   if (num1size != (m + n) || num2size != n) {
//     return;
//   }
//   int end1 = m - 1;
//   int end2 = n - 1;
//   int endnums1 = m + n - 1;
//   for (int i = endnums1; i >= 0; i--) {
//     if (end2 < 0)
//       break;
//     (end1 >= 0 && nums1[end1] > nums2[end2]) ? replace(nums1, nums1, &end1, i)
//                                             : replace(nums1, nums2, &end2, i);
//   }
// }

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main(void) {
  /*
   *  You are given two integer arrays nums1 and nums2,
   *  sorted in non-decreasing order, and two integers m and n, representing the
   * number of elements in nums1 and nums2 respectively.
   *
   *   Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
   *   Output: [1,2,2,3,5,6]
   *   Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
   * */
  int nums1[] = {1, 2, 3, 0, 0, 0};
  int nums1size = *(&nums1 + 1) - nums1;
  int nums2[] = {2, 5, 6};
  int nums2size = *(&nums2 + 1) - nums2;
  int m = 3;
  int n = 3;
  merge(nums1, nums1size, m, nums2, nums2size, n);
  printarr(nums1, nums1size);
  return 0;
}
