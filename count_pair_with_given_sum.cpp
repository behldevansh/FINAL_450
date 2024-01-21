//Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

//https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

#include <bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        map<int,int> mp;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(mp.find(k-arr[i])!=mp.end())
            {
                ans+=mp[k-arr[i]];
            }
            mp[arr[i]]++;
        }
        return ans;
    }
};