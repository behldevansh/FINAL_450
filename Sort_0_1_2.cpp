//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0; i<n ;i++){
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int k=0;
        while(c0>0){
            a[k]=0;
            k++;
            c0--;
        }
        while(c1>0){
            a[k]=1;
            k++;
            c1--;
        }
        while(c2>0){
            a[k]=2;
            k++;
            c2--;
        }
        // code here 
    }
    
};