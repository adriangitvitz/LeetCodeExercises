#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {
  int k = 1;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] != nums[k - 1]) {
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
  ;
  int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int size = *(&nums + 1) - nums;
  int k = removeDuplicates(nums, size);
  printarr(nums, k);
  return 0;
}
