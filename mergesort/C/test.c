#include "solutions/merge.h"
#include <assert.h>
#include <stdio.h>

#define EXIT_SUCCESS 0;

void compare(int *x, int *y, int size) {
  for (int i = 0; i < size; i++) {
    assert(x[i] == y[i]);
  }
  printf("Equal arrays\n");
}

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void test(const char *msg, void (*op)(int *, int, int, int *, int, int), int *x,
          int x_size, int *y, int y_size, int m, int n, int *expected) {
  printf("%s\n", msg);
  op(x, x_size, m, y, y_size, n);
  compare(x, expected, x_size);
}

int main(void) {
  int nums1[] = {1, 2, 3, 0, 0, 0};
  int nums1size = *(&nums1 + 1) - nums1;
  int nums2[] = {2, 5, 6};
  int nums2size = *(&nums2 + 1) - nums2;
  int m = 3;
  int n = 3;
  int expected[] = {1, 2, 2, 3, 5, 6};

  test("First Iteration", merge, nums1, nums1size, nums2, nums2size, m, n,
       expected);

  return EXIT_SUCCESS;
}
