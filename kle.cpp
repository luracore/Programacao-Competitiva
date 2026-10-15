#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution {
private:
  void partialSort(vector<int> &nums, int k) {
    for (int i = 0; i < k; i++) {
      int minIndex = i;

      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[j] > nums[minIndex])
          minIndex = j;
      }

      if (minIndex != i) {
        int tmp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = tmp;
      }
    }
  }

public:
  int findKthLargest(vector<int> &nums, int k) {
    partialSort(nums, k);
    return nums[k-1];
  }
};

int main() {
  vector<int> nums = {3,2,1,5,6,4};
  int k = 2;

  cout << Solution().findKthLargest(nums, k);
  return 0;
}
