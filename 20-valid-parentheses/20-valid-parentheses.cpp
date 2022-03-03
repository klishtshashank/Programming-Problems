class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        int n= s.size();
        char p= s[0];
      for(int i=0;i<n;i++)
      {
          char ch= s[i];
if(ch=='(' || ch== '{' || ch== '['){
                st.push(ch);
          }
          
else {
                if(!st.empty()){
                            if((ch==')' && st.top()=='(' )||
                              (ch=='}' && st.top()== '{')||
                                (ch==']' && st.top()=='[')){
                                             st.pop();
                                                    }    
                                else
                                            return false;
                }
                    else
                    return false;
}
           }
           if(st.empty())
           return true;
           
           else 
           return false;
     
//        stack<char> st;
//       if(s[0]==')'||s[0]=='}'||s[0]==']'){
//             return false;
//         }
//       else{
      
//           for(int i=0;i<s.length();i++){
//               char ch= s[i];
//               if(ch=='('||ch=='{'||ch=='['){
//                   st.push(ch);
//               }
//               else{
//                   char top= st.top();
//                   if(!st.empty()){
//                       if((ch==')'&& top== '(')||(ch=='}'&& top== '{')||(ch==']'&& top== '[')){
//                           st.pop();
//                       }
//                       else
//                           return false;  
//                   }
//                   else
//                       return false;  
//               }
              
//           }
//       }
//          if(st.empty()){
//               return true;
//           }
//           else
//               return false;
        
    }
};