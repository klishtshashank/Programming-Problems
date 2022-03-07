// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int> ans;
        vector<int> ans1;
        vector<int> ans2;
        for(int i=0;i<n;i++){
            if(a[i]>0)
            ans1.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]<0)
            ans2.push_back(a[i]);
        }
         for(int i=0;i<n;i++){
            if(ans.size()<=n){
            ans.push_back(ans1[i]);
            ans.push_back(ans2[i]);
            }
             
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
  // } Driver Code Ends