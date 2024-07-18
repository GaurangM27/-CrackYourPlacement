class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,index=-1;
        while(j<needle.size() && i<haystack.size()){
            if(haystack[i]==needle[j]){
                if(index==-1)
                index=i;
                i++;
                j++;
            }
            else{
                if(index==-1)
                i++;
                else
                i=index+1;
                index=-1;
                j=0;
            }
        }
        if(j<needle.size())
        return -1;
        return index;
    }
};