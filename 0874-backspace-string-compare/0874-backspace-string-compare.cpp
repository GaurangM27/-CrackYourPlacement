class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,pt;
        int i=0;
        while(i<s.size()){
            if(s[i]=='#' && !st.empty()){
                st.pop();
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
            i++;
        }
        i=0;
        while(i<t.size()){
            if(t[i]=='#' && !pt.empty()){
                pt.pop();
            }
            else if(t[i]!='#'){
                pt.push(t[i]);
            }
            i++;
        }
        while(!st.empty() && !pt.empty()){
            char c=st.top();
            char t=pt.top();
            if(c!=t)
            return false;
            st.pop();
            pt.pop();
        }
        if(st.empty() && pt.empty())
        return true;
        return false;
    }
};