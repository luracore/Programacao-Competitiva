#include <stdio.h>

int numTrees(int n) {
    // Vetor para guardar o número de árvores para cada quantidade de nós
    long long dp[n + 1];
    for (int i = 0; i <= n; i++) dp[i] = 0;
    
    dp[0] = 1; // 0 nós = 1 árvore vazia
    dp[1] = 1; // 1 nó = 1 árvore
    
    // Preenche o vetor usando os resultados anteriores
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }
    
    return dp[n];
}

int main() {
  int n = 4;
  printf("\n%d\n", numTrees(n));

  return 0;
}
