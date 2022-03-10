// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    stack<int> st;
   int n= s.length();
   for(int i=0;i<n;i++)
   {
       char ch= s[i];
      
       if(ch=='('|| ch=='{'|| ch=='[')
       {
           st.push(ch);
       }
       else{
           
            if(!st.empty()){
                 char top= st.top();
                if((ch==')'&& top=='(')||(ch=='}'&& top=='{')||(ch==']'&& top=='['))
                    st.pop();
                else
                return 0;
            }
            else
                return 0;
       }
       
   }
   if(st.empty())
    return 1;
   else
     return 0;
}