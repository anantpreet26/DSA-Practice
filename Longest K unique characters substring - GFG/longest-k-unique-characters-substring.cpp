//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>check;
    for(auto i:s)check[i]++;
    if(check.size()<k)return -1;
    int j=-1;
        int i=0;
        int lss =0 ;
        unordered_map<char,int>dk;
        while(i<s.size()){
            dk[s[i]]++;
            
            while(dk.size()>k){
                j++;
                if(dk[s[j]]==1)dk.erase(s[j]);
                else dk[s[j]]--;
            }
            int len = i-j;
            lss = max(lss,len);

            i++;
        }
        return lss;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends