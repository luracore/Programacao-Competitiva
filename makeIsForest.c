#include <stdio.h>
#include <stdlib.h>

typedef struct Vertice {
  int el;
  struct Vertice *prox;
} Vertice;
Vertice *newVertice(int i) {
  Vertice *v = malloc(sizeof(Vertice));
  v->el = i;
  v->prox = NULL;
  return v;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  Vertice *vertices[n];
  for (int i = 0; i < n; i++) {
    vertices[i] = newVertice(i);
  }

  for (int i = 0; i < m; i++) {
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    v1--;
    v2--;

    Vertice *v;
    v = newVertice(v2);
    v->prox = vertices[v1]->prox;
    vertices[v1]->prox = v;

    v = newVertice(v1);
    v->prox = vertices[v2]->prox;
    vertices[v2]->prox = v;
  }

  return 0;
}
