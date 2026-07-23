class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = INT_MIN;
        long long n = nums.size();
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
        }
        int left = 0;
        long long count = 0;
        int temp = 0;
        for(int right = 0;right<n;right++){
            if(nums[right]==mx){
                temp++;
            }
            while(temp>=k && left<=right){
                if(nums[left]==mx){
                    temp--;
                }
                left++;
            }
            count+=right-left+1;
        }
        return (n*(n+1))/2 - count;
    }
};
//TC O(N)
//SC O(1)