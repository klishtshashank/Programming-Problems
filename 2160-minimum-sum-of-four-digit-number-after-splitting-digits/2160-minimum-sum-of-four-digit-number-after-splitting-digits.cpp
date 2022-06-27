class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        int x= num;
        int a= num%10;
        num=num/10;
        int b= num%10;
                num=num/10;
    int c= num%10;
                num=num/10;
int d= num%10;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        ans.push_back(d);
        
        sort(ans.begin(), ans.end());
        // for(int i=0;i<4;i++)
        // {
        //     cout<< ans[i]<<endl;
        // }
        int p= (ans[0]*10) + ans[3];
        int q= (ans[1]*10 )+ ans[2];
        return p+q;
        
        
        
    }
};