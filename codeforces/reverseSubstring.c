// https://codeforces.com/problemset/problem/1155/A

#include <stdio.h>

int main(){
  int tam;
  scanf("%d", &tam);

  char str[tam];
  scanf("%s", str);

  int achou = 0;

  int i, j;
  for(i = 0, j = 1; j < tam; i++, j++){
    if(str[j] < str[i]){
      achou = 1;
      tam = 0;
    }
  }

  if(achou){
    printf("YES\n%d %d", i, j);
  }else{
    printf("No\n");
  }
}
