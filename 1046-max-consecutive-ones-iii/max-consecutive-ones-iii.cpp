class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int n = nums.size();
        int res = 0;
        int count = 0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                count++;
            }
            while(count>k && left<=right){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};