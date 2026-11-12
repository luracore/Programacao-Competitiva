#include <iostream>

class Solution {
public:
  long long minimumCost(int cost1, int cost2, int costBoth, int need1,
                        int need2) {

    long long custo = 0;
    long long costParte1;
    long long needParte1;
    long long costParte2;
    long long needParte2;

    if (need1 < need2) {
      costParte1 = cost1;
      needParte1 = need1;
      costParte2 = cost2;
      needParte2 = need2;
    } else {
      costParte1 = cost2;
      needParte1 = need2;
      costParte2 = cost1;
      needParte2 = need1;
    }

    if ((costParte1 + costParte2) < costBoth) {
      custo += costParte1 * needParte1;
    } else {
      custo += costBoth * needParte1;
      needParte2 -= needParte1;
    }

    if (costParte2 < costBoth) {
      custo += costParte2 * needParte2;
    } else {
      custo += costBoth * needParte2;
    }

    return custo;
  }
};

int main() {
  int cost1 = 5;
  int cost2 = 4;
  int costBoth = 15;
  int need1 = 2;
  int need2 = 3;

  Solution s;
  std::cout << s.minimumCost(cost1, cost2, costBoth, need1, need2) << "\n";

  return 0;
}
