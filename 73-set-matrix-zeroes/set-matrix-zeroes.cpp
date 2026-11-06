class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool r = false;
        bool c = false;
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                r = true;
                break;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[j][0]==0){
                c = true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(r){
            for(int k=0;k<n;k++){
                matrix[0][k]=0;
            }
        }
        if(c){
            for(int k=0;k<m;k++){
                matrix[k][0]=0;
            }
        }
    }
};
//TC O(M*N)
//SC O(1)