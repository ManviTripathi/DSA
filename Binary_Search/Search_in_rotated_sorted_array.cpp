//Leetcode 33 ( Search in rotated sorted array)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) return mid;

        // Check if left part is sorted
        if (nums[mid] >= nums[start]) {
        if (target >= nums[start] && target < nums[mid]) {
            end = mid - 1; 
        } else {
            start = mid + 1; 
            }
        } 

        // Right part is sorted
        else {
            if (target > nums[mid] && target <= nums[end]) {
                start = mid + 1; // move right
            } else {
                end = mid - 1; // move left
            }
        }
    }

    return -1;
    }
};

// Time = O(log n)
// space = O(1)