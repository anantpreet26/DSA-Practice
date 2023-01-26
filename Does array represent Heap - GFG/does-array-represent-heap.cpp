//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isHeap(int arr[], int i, int n)
{
    // If (2 * i) + 1 >= n, then leaf node, so return true
    if (i >= (n - 1) / 2)
        return true;
  
    // If an internal node and is 
    // greater than its children,
    // and same is recursively 
    // true for the children
    if (arr[i] >= arr[2 * i + 1] && 
        arr[i] >= arr[2 * i + 2]
        && isHeap(arr, 2 * i + 1, n)
        && isHeap(arr, 2 * i + 2, n))
        return true;
  
    return false;
}
  
    bool isMaxHeap(int arr[], int n)
    {   for (int i=0; i<=(n-2)/2; i++)
    {
        // If left child is greater, return false
        if (arr[2*i +1] > arr[i])
                return false;
  
        // If right child is greater, return false
        if ( arr[2*i+2] > arr[i])
                return false;
    }
    return true;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends