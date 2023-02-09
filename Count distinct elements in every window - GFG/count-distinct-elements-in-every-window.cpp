//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>res;
        unordered_map<int,int>map;
        for(auto i=0;i<k;i++){
            map[A[i]]++;
        }
        res.push_back(map.size());
        
        // for(int j=k,i=0;j<n;j++,i++){
        //     map[A[i]]--;
        //     if(map[A[i]]==0)
        //     map.erase(A[i]);
        //     map[A[j]]++;
        //     res.push_back(map.size());
            
        // }
        int i=k;
        int j=0;
        while(i<n){
            
            map[A[i]]++;
            i++;
            if(map[A[j]] == 1)map.erase(A[j]);
            else map[A[j]]--;
            j++;
            res.push_back(map.size());            // i++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends