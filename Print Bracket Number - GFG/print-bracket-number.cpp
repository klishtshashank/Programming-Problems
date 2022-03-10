// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    int n= S.length();
	    vector<int> ans;
	    stack<int> s;
	    int count =1;
	    for(int i=0;i<n;i++)
	    {
	        char ch= S[i];
	        
	        if(ch=='(')
	        {
	            s.push(count);
	            ans.push_back(count++);
	            
	        }
	        else if(ch==')')
	        {
	            
	            ans.push_back(s.top());
	            s.pop();
	           
	        }
	       
	    }
	    return ans;
	   //  vector<int> v;
    // stack<int> st;
    // int count = 1;
    // for(int i = 0 ; i < S.size(); i++)
    // {
    //     if(S[i] == '(')
    //     {
    //         st.push(count);
    //         v.push_back(count);
    //         count++; 
    //     }
    //     else if(S[i] == ')')
    //     {
    //         v.push_back(st.top());
    //         st.pop();
    //     }
           
    // }
    // return v;
	}
};

// { Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends