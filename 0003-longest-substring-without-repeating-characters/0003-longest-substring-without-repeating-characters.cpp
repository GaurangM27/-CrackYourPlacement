class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,maxi=0;
        unordered_map<char,int> mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};