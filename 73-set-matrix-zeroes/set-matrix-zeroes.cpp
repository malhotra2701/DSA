class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> str;
        unordered_set<int> stc;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    str.insert(i);
                    stc.insert(j);
                }
            }
        }
        for(int i=0;i<m;i++){
            if(str.find(i)==str.end()){
                continue;
            }
            else{
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(stc.find(i)==stc.end()){
                continue;
            }
            else{
                for(int j=0;j<m;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};