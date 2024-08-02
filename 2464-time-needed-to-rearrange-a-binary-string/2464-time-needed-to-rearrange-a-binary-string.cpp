class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int res=0;
        while(true){
            vector<int> in;
            int count=0;
            int i=0,j=1;
            while(j<s.size()){
                if(s[i]=='0' && s[j]=='1'){
                    count++;
                    in.push_back(i);
                }
                i++;
                j++;
            }
            if(count==0)
            break;
            res++;
            for(int i=0;i<in.size();i++){
                s[in[i]]='1';
                s[in[i]+1]='0';
            }
        }
        return res;
    }
};