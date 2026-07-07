class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int count = 0;
        int res = 0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                count++;
            }
            while(count>1 && left<=right){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            res = max(res,right-left);
        }
        return res;
    }
};