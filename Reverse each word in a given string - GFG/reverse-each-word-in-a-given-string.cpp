// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    private: 
    string reverse(string & s)
    {
        int i=0;
        int n= s.size();
        int e= n-1;
        while(i<=e)
        {
            swap(s[i++],s[e--]);
        }
        return s;
    }
  public:
    string reverseWords (string s)
    {
        string ans="";
        string ss= s+'.';
        int n= ss.length();
        for(int i=0;i<n;i++)
        {
           string q="";
            while(ss[i]!='.')
            {
                q+= ss[i];
                i++;
            }
          string z=   reverse(q);
          ans= ans+ z+ '.';
        }
       ans.pop_back();
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends