class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       vector<int> ans;
        reverse(digits.begin(), digits.end());
        int carry=0;
        int n= digits.size();
        
        int sum= 1+ digits[0];
        ans.push_back(sum%10);
        carry= sum/10;
        int i=1;
        while(i<n)
        {
            int sum=0;
             sum= digits[i] + carry;
            i++;
            ans.push_back(sum%10);
            carry= sum/10;
            
        }
        if(carry)
            ans.push_back(carry);
        
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};