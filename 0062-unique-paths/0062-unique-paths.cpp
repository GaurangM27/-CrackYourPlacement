class Solution {
public:
int nways(int i,int j,int m,int n,vector<vector<int>>& dp){
    if(i==m-1 && j==n-1)
    return 1;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int d=0,r=0;
    if(i+1<m){
        d=nways(i+1,j,m,n,dp);
    }
    if(j+1<n){
        r=nways(i,j+1,m,n,dp);
    }
    return dp[i][j]=d+r;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return nways(0,0,m,n,dp);
    }
};