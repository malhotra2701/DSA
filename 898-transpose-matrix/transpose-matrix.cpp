class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        // Create a new matrix of size n x m (swapped dimensions)
        // initialized with 0s
        vector<vector<int>> matrix(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // The element at (i, j) goes to (j, i) in the transposed matrix
                matrix[j][i]=mat[i][j];
            }
        }
        return matrix;
    }
};

//TC O(m*n)
//SC O(m*n)