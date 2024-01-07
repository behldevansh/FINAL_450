//Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


//https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sm=INT_MIN,cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum+=arr[i];
            if(cursum>sm)
                sm=cursum;
            if(cursum<0)
                cursum=0;
        }
        return sm;
        
        
    }
};