class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1,count1=0,count2=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                j--;
                count1++;
            }
            if(count1>1)
            break;
        }
        i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                i++;
                count2++;
            }
            if(count2>1)
            break;
        }
        if(count1>1 && count2>1)
        return false;
        return true;
    }
};