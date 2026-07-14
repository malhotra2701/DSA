class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& mat) {
        // column traversal
        int m = mat.size();
        int n = mat[0].size();
        for(int j=0;j<n;j++){
            int mx = INT_MIN;
            for(int i=0;i<m;i++){
                mx = max(mx,mat[i][j]);
            }
            for(int i=0;i<m;i++){
                if(mat[i][j]==-1){
                    mat[i][j]=mx;
                }
            }
        }
        return mat;
    }
};