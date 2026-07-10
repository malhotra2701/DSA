class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int m = tasks.size();
        int n = tasks[0].size();
        int res = INT_MAX;
        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum = sum + tasks[i][j];
            }
            res = min(res,sum);
        }
        return res;
    }
};