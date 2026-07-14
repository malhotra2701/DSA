class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            int mx = INT_MIN;
            for(int j=0;j<m;j++){
                mx = max(mx,arr[j][i]);
            }
            temp.push_back(mx);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[j][i]==-1){
                    arr[j][i]=temp[i];
                }
            }
        }
        return arr;
    }
};