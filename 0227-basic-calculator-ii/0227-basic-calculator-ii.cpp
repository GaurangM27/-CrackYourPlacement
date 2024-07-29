class Solution {
public:
    int calculate(string s) {
        char ch='+';
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                int val=0;
                while(i<n && isdigit(s[i])){
                    val=val*10 + (s[i]-'0');
                    i++;
                }
                i--;
                if(ch=='+'){
                    st.push(val);
                }
                else if(ch=='-')
                st.push(-val);
                else if(ch=='*'){
                    int temp=st.top();
                    st.pop();
                    st.push(temp*val);
                }
                else{
                    int temp=st.top();
                    st.pop();
                    st.push(temp/val);
                }
            }
            else if(s[i]!=' '){
                ch=s[i];
            }
        }
        int sum=0;
        while(st.size()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};