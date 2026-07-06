class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int sum = 0;
        int left = 0;
        int n = nums.size();
        for(int right=0;right<n;right++){
            sum = sum + nums[right];
            while(sum>=target && left<=right){
                res = min(res,right-left+1);
                sum = sum - nums[left];
                left++;
            }
        }
        if(res==INT_MAX){
            return 0;
        }
        return res;
    }
};