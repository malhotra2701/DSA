class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int t , res = 1;
        int left = 0;
        int l = 0;
        int n = nums.size();
        for(int right=1;right<n;right++){
            if(nums[right]<nums[right-1]){
                left = right;
            }
            else if(nums[right]>nums[right-1]){
                l = right;
            }
            else if(nums[right]==nums[right-1]){
                l = right;
                left = right;
            }
            res = max (res , right-left+1);
            t = max(t,right-l+1);
        }
        return max(t,res);
    }
};