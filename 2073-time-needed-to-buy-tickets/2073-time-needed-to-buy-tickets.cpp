class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        //BRUTE FORCEEE
        int time=0;
        int n= tickets.size();
        while(tickets[k]>0)
        {
            for(int i=0;i<n;i++)
            {    if(tickets[i]>0){
                    tickets[i]--;
                    time++;
                    }
                if(tickets[k]==0 and i==k){
                    return time;
            }
        }
           
    }
         return time;
    }
    
};