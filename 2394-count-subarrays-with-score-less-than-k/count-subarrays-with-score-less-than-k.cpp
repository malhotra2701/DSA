class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long count = 0;
        int left = 0;
        long long sum = 0;
        long long p = 1;
        for(int right = 0;right<n;right++){
            sum = sum + nums[right];
            while(sum*p >= k && left<=right){
                sum = sum - nums[left];
                p--;
                left++;
            }
            count += right-left+1;
            p++;
        }
        return count;
    }
};