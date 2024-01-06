//Given an array, rotate the array by one position in clock-wise direction.

//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1


void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--) arr[i+1]=arr[i];
    arr[0]=last;
}