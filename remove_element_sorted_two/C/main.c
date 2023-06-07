#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {
  int c = 1;
  int y = 1;
  for (int i = 1; i < numsSize; i++) {
    if (nums[i] == nums[i - 1]) {
      c++;
    } else {
      c = 1;
    }
    if (c <= 2) {
      nums[y++] = nums[i];
    }
  }
  return y;
}

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main(void) {
  int nums[] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
  int size = *(&nums + 1) - nums;
  int k = removeDuplicates(nums, size);
  printarr(nums, k);
  return 0;
}
