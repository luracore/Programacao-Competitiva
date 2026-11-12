// Questão: https://atcoder.jp/contests/abc439/tasks/abc439_b

#include <stdio.h>
#include <math.h>

int rec(int n){
  if(n == 0) return 0;
  int resto = n/10;
  int atual = n - (resto * 10);
  return pow(atual, 2) + rec(resto);
}

int isHappyNumber(int n){
  while(n > 10){
    n = rec(n);
  }
  return n == 10 || n == 7 || n == 1;
}

int main(){
  
  int n;
  scanf("%d", &n);

  printf("%s\n", isHappyNumber(n) ? "Yes" : "No");

  return 0;
}
