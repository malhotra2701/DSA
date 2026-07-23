class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int count = 0;
        long long p = 1;
        for(int right=0;right<n;right++){
            p = p * nums[right];
            while(p>=k && left<=right){
                p = p / nums[left];
                left++;
            }
            count += right-left+1;
        }
        return count;
    }
};