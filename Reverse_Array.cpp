//Write a program to reverse an array or string
//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string

#include <bits/stdc++.h> 
using namespace std; 

void rvereseArray(int arr[], int start, int end) { 
    while (start < end) { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
} 