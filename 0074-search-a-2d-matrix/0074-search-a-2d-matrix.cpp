class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=matrix.size()-1;
        int mid;
        while(i<=j){
            mid=(i+j)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
                break;
            }
            else if(matrix[mid][0]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        i=0,j=n-1;
        while(i<=j){
            int midi=(i+j)/2;
            if(matrix[mid][midi]==target)
            return true;
            else if(matrix[mid][midi]<target)
            i=midi+1;
            else
            j=midi-1;
        }
        return false;
    }
};