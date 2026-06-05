class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size(); // so cot
        int m=matrix.size(); // so hang
        int l=0,r=m*n-1;
        while(l<=r){
            int mid=(l + r)/2;
            int row=mid /n, col=mid % n;//quy ve ma tran 
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) l=mid+1; 
            else{
                r=mid-1;
            }
        }
        return false;
    }
};