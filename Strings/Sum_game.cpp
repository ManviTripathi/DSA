/* Leetcode - 1927 (Sum game)*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int leftSum = 0, rightSum = 0;
        int leftQ = 0, rightQ = 0;

        // Calculate digit sums and count '?' in both halves
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0'; //'0' is to convert char to int digit
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        // If the total number of '?' is odd, Alice can always force a win
        if ((leftQ + rightQ) % 2 == 1)
            return true;

        /*
            For an even number of '?', Bob can win only if the existing
            diff btw the two halves can be exactly compensated
            by the imbalance in the number of '?'.

            Each '?' can contribute a maximum difference of 9.
        */
        return leftSum - rightSum != (rightQ - leftQ) / 2 * 9;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)