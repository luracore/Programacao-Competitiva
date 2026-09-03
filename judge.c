#include <stdio.h>

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {

  // Array com a quantidade de pessoas que cada pessoa confia
  int array[n];
  for(int i = 0; i < n; i++)
    array[i] = 0; // Inicializando com 0

  // Iterar sobre cada coluna do array de arestas (trust)
  for(int i = 0; i < trustSize; i++)
    // Incrementa a quantidade da pessoa correspondente ao primeiro elemento da coluna "i"
    array[trust[i][0] -1]++; // -1 porque os vetores começam em 1

  int judgeCount = 0; // Quantidade de juiz para ter certeza que só um existe
  int judge = -1; // Quem é o juiz
  for(int i = 0; i < n; i++)
    if(array[i] == 0){ // O juiz não confia em ninguem
      judge = i+1; 
      if(++judgeCount > 1){
        judge = -1;
        i = n; // break
      }
    }

  return judge;
}

int main(){

  /*
     int *array[] = {
     (int[]){1, 3},
     (int[]){2, 3},
     };

     int n = 3;
     int trustSize = 4;
     int trustColSize = 2;
     */

  int *array[] = {
    (int[]){1, 2},
  };

  int n = 2;
  int trustSize = 1;
  int trustColSize = 0;

  printf("%d\n", findJudge(n, array, trustSize, &trustColSize));

  return 0;
}
