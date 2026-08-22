/* Leetcode - 283 (Move Zeroes)
   Approach - Two Pointer */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int j = 0;

    for (int i = 0; i < nums.size(); i++) 
    {
        if (nums[i] != 0) 
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    }
};

// Time: O(n)
// Space: O(1)