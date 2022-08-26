class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int m=month, d= day, y= year;
        if(m==1 || m==2)
  {
     m += 12;
      y--;
  }  
      
    int z =(d+2*m+3*(m + 1)/5+y+y/4-y/100+y/400+1)%7;
    
    if(z==0)
        return "Sunday";
     else if(z==1)
         return "Monday";
    else if(z==2)
        return "Tuesday";
        else if(z==3)
            return "Wednesday";
            else if(z==4)
                return "Thursday";
                else if(z==5)
                    return "Friday";
                
                        return "Saturday";
        
    }
};