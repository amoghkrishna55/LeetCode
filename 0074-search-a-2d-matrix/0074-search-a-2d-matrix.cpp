class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int a = 0;
        while(true){
            if(a==matrix.size()) return false;
            if(target>matrix[a][n-1]) a++;
            else break;
        }
        for(int i=0;i<n;i++){
            if(matrix[a][i]==target) return true;
        }
        return false;
    }
};