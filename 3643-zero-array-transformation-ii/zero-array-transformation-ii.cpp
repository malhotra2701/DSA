class Solution {
public:
    bool checker(vector<int> &nums,vector<vector<int>> &queries , int mid){
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
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += temp[i];
            if(sum<nums[i]){
                return false;
            }
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        bool flag = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            return 0;
        }
        int n = queries.size();
        int low = 0;
        int high = n;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(checker(nums,queries,mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};