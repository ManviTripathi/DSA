/*Leetcode - 1929(Concatenation of array)*/

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
            ans[i +n] = nums[i];
        }
        return ans;
    }
};

// time = O(n); loop runs n times
// space = O(n); 2n space in memory 