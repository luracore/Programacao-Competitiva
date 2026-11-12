#include <stdio.h>

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {

  // Array com a quantidade de confiança de cada pessoa
  int array[n];
  for(int i = 0; i < n; i++)
    array[i] = 0; // Inicializando com 0

  for(int i = 0; i < trustSize; i++){
    // Ao ser confiado, incrementa a confiança
    array[trust[i][1] -1]++;
    // Ao confiar, decrementa a confiança
    array[trust[i][0] -1]--;
  }

  int judge = -1;
  for(int i = 0; i < n; i++)
    // O juiz é a pessoa que recebeu a confiança de todos e não confia em ninguem
    if(array[i] == n-1){
      judge = i+1; 
      i = n; // break
    }

  return judge;
}

int main(){

  /*
     int n = 2;
     int trustSize = 1;
     int trustColSize = 0;

     int *array[] = {
     (int[]){1, 2},
     };

     int n = 3;
     int trustSize = 2;
     int trustColSize = 0;

     int *array[] = {
     (int[]){1, 3},
     (int[]){2, 3},
     };
     */

  int n = 3;
  int trustSize = 2;
  int trustColSize = 0;

  int *array[] = {
    (int[]){1, 2},
    (int[]){2, 3},
  };

  printf("%d\n", findJudge(n, array, trustSize, &trustColSize));

  return 0;
}
