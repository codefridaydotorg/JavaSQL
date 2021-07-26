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
    void swap(int arr[],int low,int high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
    }
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)return;
        
        int start=low;
        int end=high;
        
        int pivot=arr[start];
        
        while(start<end){
            while(start<high && arr[start]<=pivot)start++;
            while(end>low && arr[end]>pivot)end--;
            
            if(start<end)swap(arr,start,end);
        }
        
        swap(arr,low,end);
        
        quickSort(arr,low,end-1);
        quickSort(arr,end+1,high);
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends

// Time Complexity: O(N*LOG(N))
// Space Complexity: O(1)