class Solution {
public:
    int countDays(int days, vector<vector<int>>& arr) {
        int n = arr.size();
        int count = 0;
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
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
        for(int i=0;i<ans.size();i++){
            days = days - (ans[i][1]-ans[i][0] + 1);
        }
        return days;
    }
};