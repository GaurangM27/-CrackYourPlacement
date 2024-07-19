class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==1)
        return strs[0];
        sort(strs.begin(),strs.end());
        int i=0,flag=0;
        while(true){
            for(int j=0;j<strs.size()-1;j++){
                if(i<strs[j].size() && i<strs[j+1].size()){
                    if(strs[j][i]!=strs[j+1][i]){
                        flag=1;
                        break;
                    }
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
            res+=strs[0][i];
            i++;
        }
        return res;
    }
};