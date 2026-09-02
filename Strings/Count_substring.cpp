// Leetcode 3084. Count Substrings Starting and Ending with Given Character

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubstrings(string s, char c) {
      long long freq = 0;
      for ( int i = 0; i < s.length(); i++){
        if( s[i] == c ){
            freq++;
        }
      }  
      return (freq*(freq+1))/2;
    }
};

//Time O(n)
//space O(1)