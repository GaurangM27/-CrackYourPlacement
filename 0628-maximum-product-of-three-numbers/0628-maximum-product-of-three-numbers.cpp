class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int k=nums[0]*nums[1]*nums[n-1];
        int r=nums[n-1]*nums[n-2]*nums[n-3];
        if(k>r)
        return k;
        return r;
    }
};