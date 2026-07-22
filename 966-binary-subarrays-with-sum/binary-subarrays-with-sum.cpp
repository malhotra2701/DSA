class Solution {
public:
    int helper(vector<int> &nums,int k){
        if(k<0){
            return 0;
        }
        int n = nums.size();
        int left = 0;
        int count = 0;
        int sum = 0;
        for(int right = 0;right<n;right++){
            sum = sum + nums[right];
            while(sum>k && left<=right){
                sum = sum - nums[left];
                left++;
            }
            count = count + (right-left+1);
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal) - helper(nums,goal-1);
    }
};
//TC O(N)
//SC O(1)