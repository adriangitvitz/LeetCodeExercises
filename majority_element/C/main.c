#include <stdio.h>

#define SIZE 20

int majorityElement(int *nums, int numsSize) {
  int h_t[SIZE] = {0};
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] > 0) {
      int h_f = nums[i] % numsSize;
      h_t[h_f]++;
      if (h_t[h_f] > (numsSize / 2)) {
        return nums[i];
      }
    }
  }
  return 1;
}

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main(void) {
  int nums[] = {3, 2, 3};
  int size = *(&nums + 1) - nums;
  int k = majorityElement(nums, size);
  // printf("%d\n", k);
  // printarr(nums, k);
  return 0;
}
