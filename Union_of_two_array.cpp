//Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

//https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
#include <bits/stdc++.h> 
using namespace std; 
  
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set <int> st;
    for(int i=0 ;i<n ; i++){
        st.insert(a[i]);
    }
    for(int i=0 ; i<m ; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    int size = temp.size();
    return size;
        //code here
    }
};