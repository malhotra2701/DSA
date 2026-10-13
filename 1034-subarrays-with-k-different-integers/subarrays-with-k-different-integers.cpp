class Solution {
public:
    int helper(vector<int> &nums,int k){
        int n = nums.size();
        int left = 0;
        int res = 0;
        unordered_map<int,int> mp;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp.size()>k && left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            res += right-left+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
};