class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxu=INT_MIN;
        for(int i=-0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxu=max(maxu,prices[i]-mini);
        }
        return maxu;
    }
};