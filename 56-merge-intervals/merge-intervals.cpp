class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        ans.push_back({arr[0][0],arr[0][1]});
        for(int i=1;i<n;i++){
            int start = arr[i][0];
            int end = arr[i][1];
            if(start<=ans.back()[1]){
                ans.back()[1] = max(ans.back()[1],end);
            }
            else{
                ans.push_back({start,end});
            }
        }
        return ans;
    }
};
//TC O(nLOGN) + O(N) -> O(Nlogn)
//SC O(N)