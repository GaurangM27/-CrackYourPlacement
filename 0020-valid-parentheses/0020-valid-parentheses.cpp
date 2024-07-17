class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char> st;
        while(i<s.size()){
            if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                i++;
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};