#include <iostream>
#include <vector>

class Solution {
public:
  int longestMonotonicSubarray(std::vector<int> &nums) {
    int maior = 1;
    int menor = 1;
    int maiorTmp = 1;
    int menorTmp = 1;

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > nums[i - 1]) {
        maiorTmp++;
      } else {
        if (maiorTmp > maior)
          maior = maiorTmp;
        maiorTmp = 1;
      }
    }
    if (maiorTmp > maior)
      maior = maiorTmp;

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] < nums[i - 1]) {
        menorTmp++;
      } else {
        if (menorTmp > menor)
          menor = menorTmp;
        menorTmp = 1;
      }
    }
    if (menorTmp > menor)
      menor = menorTmp;

    return maior > menor ? maior : menor;
  }
};

int main() {
  std::vector<int> nums = {1,4,3,3,2};

  Solution s;
  std::cout << s.longestMonotonicSubarray(nums) << "\n";

  return 0;
}
