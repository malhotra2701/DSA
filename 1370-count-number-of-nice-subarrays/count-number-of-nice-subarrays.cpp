class Solution {
public:
    int helper(vector<int> &nums,int k){
        int n = nums.size();
        int left = 0;
        int res = 0;
        int count = 0;
        for(int right=0;right<n;right++){
            if(nums[right]%2!=0){
                count++;
            }
            while(count>k && left<=right){
                if(nums[left]%2!=0){
                    count--;
                }
                left++;
            }
            res += right-left+1;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
};