#include <stdio.h>

int findGCD(int* nums, int numsSize){
  int a, b;
  a = b = nums[0];
  for(int i = 1; i < numsSize; i++){
    if(nums[i] < a) a = nums[i];
    if(nums[i] > b) b = nums[i];
  }

  int t;
  while(b != 0){
    a %= b;
    t = b;
    b = a;
    a = t;
  }

  return a;
}

int main(){
  int nums[] = {3,3};
  int numsSize = 2;

  int res = findGCD(nums, numsSize);

  printf("%d\n", res);

  return 0;
}
