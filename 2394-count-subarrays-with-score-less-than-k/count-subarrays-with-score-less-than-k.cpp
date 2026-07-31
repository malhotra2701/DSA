class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long sum = 0;
        long long size = 0;
        long long count = 0;
        int left = 0;
        for(int right=0;right<n;right++){
            sum = sum + nums[right];
            size = right - left + 1;
            while(sum*size>=k && left<=right){
                sum = sum - nums[left];
                size--;
                left++;
            }
            count += size;
        }
        return count;
    }
};