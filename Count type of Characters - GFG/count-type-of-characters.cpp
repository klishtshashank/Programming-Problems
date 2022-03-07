// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int> ans;
            int u=0,l=0,n=0,c=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<= 'Z')
                    u++;
                else if(s[i]>='a' && s[i]<= 'z')
                    l++;
                else if(s[i]>='0' && s[i]<= '9')
                    n++;
                else c++;
                
            }
            ans.push_back(u);
            ans.push_back(l);
            ans.push_back(n);
         
            ans.push_back(c);
            return ans;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends