#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map; // value -> index

    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];

      // Check if complement exists in map
      if (map.find(complement) != map.end()) {
        return {map[complement], i};
      }

      // Store current number and its index
      map[nums[i]] = i;
    }

    // This should never be reached given the problem constraints
    return {};
  }
};