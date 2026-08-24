// LeetCode 2011 - Final Value of Variable After Performing Operations

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;

        // Visit each operation one by one
        for (string x : operations) {
            // '+' → +1, '-' → -1
            ans += (x[1] == '+' ? 1 : -1);
        }

        return ans;
    }
};

/*
Approach:
- Check the middle character of each operation.
- '+' means increment by 1.
- '-' means decrement by 1.

Time Complexity: O(n)
Space Complexity: O(1)
*/