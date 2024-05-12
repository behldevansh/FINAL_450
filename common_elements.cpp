//https://www.geeksforgeeks.org/problems/common-elements1132/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int i = 0; int j = 0; int k = 0;
            while(i < n1 && j < n2 && k < n3){
                if(A[i] == B[j] && B[j] == C[k]){
                    ans.push_back(A[i]);
                    int temp = A[i];
                    while(i < n1 && A[i] == temp) i++;
                    while(j < n2 && B[j] == temp) j++;
                    while(k < n3 && C[k] == temp) k++;
                }
                
                else if(A[i] < B[j]) i++;
                else if(B[j] < C[k]) j++;
                else k++;
            }
            return ans;
        }

};