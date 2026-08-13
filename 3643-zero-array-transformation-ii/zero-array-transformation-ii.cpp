class Solution {
public:
    bool helper(int mid, vector<int> &nums, vector<vector<int>> &queries){
        int n = nums.size();
        vector<int> temp(n,0);
        for(int i=0;i<mid;i++){
            int start = queries[i][0];
            int end = queries[i][1];
            temp[start] += queries[i][2];
            if(end<n-1){
                temp[end+1] -= queries[i][2];
            }
        }
        for(int i=1;i<n;i++){
            temp[i] += temp[i-1];
        }
        for(int i=0;i<n;i++){
            if(temp[i]<nums[i]){
                return false;
            }
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        bool flag = true;
        int n = queries.size();
        int s = nums.size();
        for(int i=0;i<s;i++){
            if(nums[i]!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            return 0;
        }
        int low = 0;
        int high = queries.size();
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(helper(mid,nums,queries)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};