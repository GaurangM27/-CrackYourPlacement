class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int maxi=0;
        int count=0;
        for(auto it:mp){
            int ele=it.first;
            if(mp.find(ele+1)!=mp.end()){
                count++;
            }
            else{
                maxi=max(count,maxi);
                count=0;
            }
        }
        return maxi+1;
    }
};