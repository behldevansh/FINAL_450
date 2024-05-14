//Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

//https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(X-A[i]==A[j]+A[k]){
                    return true;
                }
                else if(X-A[i]>A[j]+A[k]){
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return false;
    }

};