#include <stdio.h>

int gcdOfOddEvenSums(int n) {
  int a, b;
  a = b = 0;

  for(int i = 1; i <= n*2; i++)
    if(i % 2 == 0)
      a += i;
    else
      b += i;

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
  int n = 12345;

  int res = gcdOfOddEvenSums(n);
  printf("%d\n", res);

  return 0;
}
