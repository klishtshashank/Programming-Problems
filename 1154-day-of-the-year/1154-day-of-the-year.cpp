class Solution {
public:
    bool isLeapYear(int y){
        if(y%400 == 0 || (y%4 == 0 && y%100 !=0))
            return true;
        return false;
    }
    int dayOfYear(string date) {
        int arr[]={0, 31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=1;i<12;i++)
        {
            arr[i]+=arr[i-1];
        }
       int year = stoi(date.substr(0,4));
		int month = stoi(date.substr(5,2));
		int day = stoi(date.substr(8,2));
    //    int year=stoi(s);
        return isLeapYear(year) ? month==1|| month==2 ? arr[month-1]+day : arr[month-1] + day +1: arr[month-1]+day;
       // return day ;
    }
};