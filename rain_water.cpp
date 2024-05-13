//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
//https://leetcode.com/problems/trapping-rain-water/

#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,level=0,water=0;
        while(l<r){
            int lower=height[height[l]<height[r] ? l++:r--];
            level=max(level,lower);
            water+=level-lower;
        }
        return water;
    }
};