class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        vector<pair<int,char>> vt;
        for(auto it:mp){
            vt.push_back({it.second,it.first});
        }
        sort(vt.rbegin(),vt.rend());
        int f=1;
        int code=2;
        unordered_map<char,int> mpup;
        for(int i=0;i<vt.size();i++){
            mpup[vt[i].second]=f;
            code++;
            if(code>9){
                code=2;
                f++;
            }
        }
        int res=0;
        for(int i=0;i<word.size();i++){
            res+=mpup[word[i]];
        }
        return res;
    }
};