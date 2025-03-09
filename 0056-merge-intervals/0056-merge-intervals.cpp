class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int i=0;
        for(int j=1;j<intervals.size();j++){
            if(intervals[j][0]<=res[i][1]){
                res[i][1]=max(res[i][1],intervals[j][1]);
            }
            else{
                res.push_back(intervals[j]);
                i++;
            }
        }
        return res;
    }
};