class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
          int i=0;
       // vector<int>ans;
        int j= numbers.size()-1;
        while(i<j)
        {
            int t=numbers[i]+ numbers[j];
            if(t==target)
            {
              return {i+1, j+1};
            }
            else if(t> target)
            {
                j--;
            }
            else
                i++;
        }
        return {};
        //MY solution 
        /*
       int i=0;
        vector<int>ans;
        int j= numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+ numbers[j]==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(numbers[i]+ numbers[j]> target)
            {
                j--;
            }
            else
                i++;
        }
        return ans;
        */
    }
};