class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int l = 0;
        int t,res = 1;
        for(int right=1;right<n;right++){
            if(nums[right]<=nums[right-1]){
                left = right;
            }
            res = max(res,right-left+1);
        }
        for(int r = 1;r<n;r++){
            if(nums[r]>=nums[r-1]){
                l = r;
            }
            t = max(t,r-l+1);
        }
        return max(t,res);
    }
};