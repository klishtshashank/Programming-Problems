class StockSpanner {
public:
   int curr_index=0;
    stack<pair<int, int>> s;
    
    StockSpanner() {
       
    }
    
    int next(int price) {
        if(s.empty())
        {
            s.push({price,curr_index});
            curr_index++;
            return 1;
        }
        else{
            while(!s.empty() && s.top().first<=price)
            {
                s.pop();
            }
            int ans=0;
            if(s.empty()) ans= curr_index+1;
            else{
                ans=  curr_index - s.top().second;
              }
            s.push({price, curr_index++});
             return ans;
        }
       
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */