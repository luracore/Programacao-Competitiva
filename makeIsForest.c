#include <stdio.h>

typedef struct Vertice{
  int el;
  struct Vertice *prox;
} Vertice;

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int vertices[n];
  for(int i = 0; i < n; i++)
    vertices[i] = i+1;

  return 0;
}
