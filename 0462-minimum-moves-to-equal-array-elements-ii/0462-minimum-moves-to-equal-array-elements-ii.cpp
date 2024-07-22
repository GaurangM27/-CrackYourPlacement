class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int avg=nums[(n-1)/2];
        cout<<avg;
        int res=0;
        for(int i=0;i<nums.size();i++){
            res+=abs(nums[i]-avg);
        }
        return res;
    }
};