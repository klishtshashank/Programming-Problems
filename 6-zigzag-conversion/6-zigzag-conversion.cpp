class Solution {
public:
    string convert(string s, int numRows) {
//         vector<vector<string>>m(numRows, vector<string>(s.size(),'*'));
//         int col=0;
//         int c=0;
//         while(col<s.size())
//         {
//             if(c>=s.size()) break;
//             if(z==true)
                
//             for(int k=0;i<numRows;i++)
//             {
//                 m[k][col]=s[c++];
//             }
            
//         }
          string result="";
        if(numRows==1)
			return s;
        int step1,step2;
        int len=s.size();
        for(int i=0;i<numRows;++i){
            step1=(numRows-i-1)*2;
            step2=(i)*2;
            int pos=i;
            if(pos<len)
                result+=s.at(pos);
            while(1){
                pos+=step1;
                if(pos>=len)
                    break;
				if(step1)
					result+=s.at(pos);
                pos+=step2;
                if(pos>=len)
                    break;
				if(step2)
					result+=s.at(pos);
            }
        }
        return result;
    }
};