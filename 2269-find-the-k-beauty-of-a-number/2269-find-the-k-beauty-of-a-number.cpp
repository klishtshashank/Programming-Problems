class Solution {
public:
    int divisorSubstrings(int num, int k) {
       int i=0,j=k-1;
        string s= to_string(num);
        int n= s.size();
        int ans=0;
        while(j<n)
        {
            int z=i;
            string p="";
            for(z=i;z<i+k;z++)
            {
               p+=s[z]; 
            }
            int w= stoi(p);
        //    cout<<w<<endl;
            if(w!=0 && num%w==0) ans++;
            i++;
            j++;
        }
        return ans;
    }
};