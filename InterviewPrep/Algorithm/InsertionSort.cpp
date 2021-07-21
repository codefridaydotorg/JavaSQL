// { Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

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
    void insert(int arr[], int p)
    {
        //code here
        int temp=arr[p];
        int i;
        
        for(i=p;i>=1;i--){
            if(arr[i-1]>temp)arr[i]=arr[i-1];
            else break;
        }
        
        arr[i]=temp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1])continue;
            else insert(arr,i+1);
        }
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
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends

// Time Complexity: O(N*logN)
// Space Complexity: O(1)