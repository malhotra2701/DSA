class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int start = arr[i][0];
            int end = arr[i][1];
            if(ans.empty()){
                ans.push_back({start,end});
            }
            else{
                if(start<=ans.back()[1]){
                    ans.back()[1]= max(ans.back()[1],end);
                }
                else{
                    ans.push_back({start,end});
                }
            }
        }
        return ans;
    }
};