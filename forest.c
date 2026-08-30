#include <stdio.h>

int findCenter(int** edges, int edgesSize, int* edgesColSize){

  int r = edges[0][0] == edges[1][0] ||
    edges[0][0] == edges[1][1]
    ? edges[0][0]
    : edges[0][1];

  printf("%d\n", r);

}

int main(){
  int** edges; int edgesSize; int* edgesColSize;



  findCenter(edges, edgesSize, edgesColSize);
}
