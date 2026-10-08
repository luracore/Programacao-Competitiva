#include <stdio.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2,
                              int nums2Size) {

  int nums3Size = nums1Size + nums2Size;
  int nums3[nums3Size];

  int i1 = 0;
  int i2 = 0;
  int j = 0;
  while (i1 < nums1Size && i2 < nums2Size) {
    if (nums1[i1] <= nums2[i2]) {
      nums3[j++] = nums1[i1++];
    } else {
      nums3[j++] = nums2[i2++];
    }
  }

  while (i1 < nums1Size)
    nums3[j++] = nums1[i1++];

  while (i2 < nums2Size)
    nums3[j++] = nums2[i2++];

  nums3Size = j;

  /*
  for (int i = 0; i < nums3Size; i++)
    printf("%d ", nums3[i]);
  printf("\n");
  */

  double res;
  if (nums3Size % 2 == 1) {
    res = nums3[nums3Size / 2];
  } else {
    res = (double)(nums3[nums3Size / 2 - 1] + nums3[nums3Size / 2]) / 2;
  }

  return res;
}

int main() {
  int nums1[] = {0, 0};
  int nums1Size = 2;
  int nums2[] = {0, 0};
  int nums2Size = 2;
  printf("%.1f", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));

  return 0;
}
