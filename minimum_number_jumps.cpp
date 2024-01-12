// Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.


//https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if (n== 1)
            return 0;
        if(arr[0]== 0)
            return -1;
        int maximum = arr[0];
        int j = arr[0], count = 1;
        for(int i = 1; i < n; i++){
            if(i>= n-1)
                return count;
            maximum = max(maximum, i+arr[i]);
        j--;
        if(j == 0){
            count++;
            if(maximum<=i)
                return -1;
            j = maximum -i;
        }
        }    
       return -1;
    }
    
};