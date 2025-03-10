class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int par=n/3;
        int maj1=INT_MAX,maj2=INT_MAX,count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(nums[i]==maj2){
                count2++;
            }
            else if(count1==0){
                maj1=nums[i];
                count1++;
            }
            else if(count2==0){
                maj2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> res;
        if(count1>0){
            count1=0;
            for(int i=0;i<n;i++){
                if(nums[i]==maj1)
                count1++;
            }
            if(count1>par)
            res.push_back(maj1);
        }
        if(count2>0){
            count2=0;
            for(int i=0;i<n;i++){
                if(nums[i]==maj2)
                count2++;
            }
            if(count2>par)
            res.push_back(maj2);
        }
        return res;
    }
};