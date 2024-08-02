class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            total++;
        }
        if(total==nums.size())
        return 0;
        int mini=INT_MAX;
        int count=0;
        int i=0,j=0;
        while(j<total){
            if(nums[j]==0)
            count++;
            j++;
        }
        mini=min(mini,count);
        while(i<nums.size()){
            if(nums[j]==1 && nums[i]==0)
            count--;
            else if(nums[j]==0 && nums[i]==1)
            count++;
            mini=min(mini,count);
            i++;
            j++;
            if(j==nums.size())
            j=0;
        }
        return mini;
    }
};