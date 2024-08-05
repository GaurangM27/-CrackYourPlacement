class Solution {
public:
int recur(vector<string>& strs, int m, int n,int i,vector<vector<vector<int>>>& dp){
    if(i==strs.size())
    return 0;
    if(dp[m][n][i]!=-1)
    return dp[m][n][i];
    int zero=0,one=0;
    for(int j=0;j<strs[i].size();j++){
        if(strs[i][j]=='0')
        zero++;
        else
        one++;
    }
    int t=INT_MIN;
    if(zero<=m && one<=n)
    t=1+recur(strs,m-zero,n-one,i+1,dp);
    int nt=recur(strs,m,n,i+1,dp);
    return dp[m][n][i]=max(nt,t);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1,vector<int>(strs.size()+1,-1)));
        return recur(strs,m,n,0,dp);
    }
};