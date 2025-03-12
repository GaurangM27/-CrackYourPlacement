class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i-1]==nums[i])
            continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j-1]==nums[j])
                continue;
                int k=j+1;
                int l=n-1;
                //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" "<<ele<<endl;
                while(k<l){
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[k];
                        temp[3]=nums[l];
                        res.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return res;
    }
};