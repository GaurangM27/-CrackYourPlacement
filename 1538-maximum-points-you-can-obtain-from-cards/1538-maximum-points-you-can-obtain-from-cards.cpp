class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,maxi=INT_MIN,j=cardPoints.size()-1;
        int i;
        for(i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxi=sum;
        i--;
        while(i>=0){
            sum+=cardPoints[j];
            sum-=cardPoints[i];
            i--;
            j--;
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};