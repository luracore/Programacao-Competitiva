#include <stdio.h>

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {

  // Array of people
  int array[n];
  for(int i = 0; i < n; i++)
    array[i] = 0;

  // Geting the amount of people each one trust
  for(int j = 0; j < *trustColSize; j++)
    array[trust[j][0] -1]++;

  int judge = -1;
  for(int i = 0; i < n; i++){
    if(array[i] == 0){ // The judge don't trust nobody
      judge = i+1; 
      i = n; // break
    }
  }

  if(judge != -1){
    
  }

  return judge;
}

int main(){

  int *array[] = {
    (int[]){1, 3},
    (int[]){2, 3},
  };

  int n = 3;
  int trustSize = 4;
  int trustColSize = 2;

  printf("%d\n", findJudge(n, array, trustSize, &trustColSize));

  return 0;
}
