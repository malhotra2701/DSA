class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long count = 0;
        long long n = nums.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
        }
        long long temp = 0;
        long long res = 0;
        int left = 0;
        for(int right=0;right<n;right++){
            if(nums[right]==mx){
                temp++;
            }
            while(temp>=k && left<=right){
                if(nums[left]==mx){
                    temp--;
                }
                left++;
            }
            res = res + (right-left+1);
        }
        return (n*(n+1))/2 - res;
    }
};