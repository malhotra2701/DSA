class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long sum = 0;
        long long res = 0;
        int left = 0;
        for(int right=0;right<n;right++){
            sum += nums[right];
            while(sum*(right-left+1)>=k && left<=right){
                sum -= nums[left];
                left++;
            }
            res += right-left+1;
        }
        return res;
    }
};