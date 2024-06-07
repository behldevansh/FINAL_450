//https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

//Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans(1,1);
       while(N>1){
           int carry=0,size=ans.size(),res;
           for(int i=0;i<size;i++){
               res=ans[i]*N+carry;
               ans[i]=res%10;
               carry=res/10;
           }
           while(carry){
               ans.push_back(carry%10);
               carry=carry/10;
           }
           N--;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};