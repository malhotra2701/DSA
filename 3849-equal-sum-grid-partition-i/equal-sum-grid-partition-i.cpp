class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        long long sum = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum += arr[i][j];
            }
        }
        long long temp = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp += arr[i][j];
            }
            if(temp==sum-temp){
                return true;
            }
        }
        long long res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res += arr[j][i];
            }
            if(res == sum - res){
                return true;
            }
        }
        return false;
    }
};