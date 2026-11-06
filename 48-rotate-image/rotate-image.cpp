class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j] = matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
            int j=0;
            int k=n-1;
            while(j<k){
                swap(mat[i][j],mat[i][k]);
                j++;
                k--;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = mat[i][j];
            }
        }
    }
};