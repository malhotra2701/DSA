class Solution {
public:
    int earliestTime(vector<vector<int>>& mat) {
        int m = mat.size();
        int res = INT_MAX;
        for(int i=0;i<m;i++){
            res = min(res,mat[i][0] + mat[i][1]);
        }
        return res;
    }
};