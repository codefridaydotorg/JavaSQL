// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void swap(int arr[],int p,int q){
        int temp=arr[p];
        arr[p]=arr[q];
        arr[q]=temp;
    }
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         
         int p=l;
         int q=m+1;
         
         int size=r-l+1;
         int*newArr=new int[size];
         int i=0;
         
         while(p<=m&&q<=r){
             if(arr[p]<arr[q]){
                 newArr[i]=arr[p];
                 p++;
             }
             else{
                 newArr[i]=arr[q];
                 q++;
             }
             
             i++;
         }
         while(p<=m){
             newArr[i]=arr[p];
             i++;p++;
         }
         while(q<=r){
             newArr[i]=arr[q];
             i++;q++;
         }
         
         for(int i=0;i<size;i++){
             arr[i+l]=newArr[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l==r)return;
        
        int m=(l+r)/2;
        
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends

// Time Complexity: O(N*LOG(N))
// Space Complexity: O(N)