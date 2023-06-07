#include <stdio.h>
/*
*   Given an integer array nums and an integer val, remove all occurrences of
val in nums in-place.
*   The order of the elements may be changed. Then return the number of elements
in nums which are not equal to val. Consider the number of elements in nums
which are not equal to val be k, to get accepted, you need to do the following
things: Change the array nums such that the first k elements of nums contain the
elements which are not equal to val. The remaining elements of nums are not
important as well as the size of nums. Return k.
 * */

int removeElement(int *nums, int numsSize, int val) {
  int k = 0;
  for (int i = 0; i < numsSize; i++) {
    if (val != nums[i]) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
}

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main(void) {
  int nums[] = {3, 2, 2, 3, 4};
  int size = *(&nums + 1) - nums;
  int val = 3;
  int k = removeElement(nums, size, val);
  printarr(nums, k);
  return 0;
}
