// https://atcoder.jp/contests/abc399/tasks/abc399_c
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
  n++;

  // Inicializar lista de adjacencia
  Vertice *vertices[n];
  for (int i = 1; i < n; i++) {
    vertices[i] = newVertice(i);
  }

  // Preenche lista de adjacencia
  for (int i = 0; i < m; i++) {
    int v1, v2;
    scanf("%d %d", &v1, &v2);

    Vertice *v;
    v = newVertice(v2);
    v->prox = vertices[v1]->prox;
    vertices[v1]->prox = v;

    v = newVertice(v1);
    v->prox = vertices[v2]->prox;
    vertices[v2]->prox = v;
  }

  for (int i = 1; i < n; i++) {
    Vertice *v = vertices[i];
    printf("%d: {", v->el);
    while (v->prox != NULL) {
      v = v->prox;
      printf("%d ", v->el);
    }
    printf("}\n");
  }

  // Inicializar busca em largura
  int tempo[n];
  int nivel[n];
  int pai[n];
  for (int i = 0; i < n; i++) {
    tempo[i] = 0;
    nivel[i] = 0;
    pai[i] = -1;
  }

  Vertice *v = vertices[1];

  return 0;
}
