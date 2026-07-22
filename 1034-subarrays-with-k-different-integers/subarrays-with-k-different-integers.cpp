class Solution {
public:
    int helper(vector<int>&nums,int k){
        unordered_map<int,int> mp;
        int count = 0;
        int left = 0;
        int n =nums.size();
        for(int right = 0;right<n;right++){
            mp[nums[right]]++;
            while(mp.size()>k && left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            count = count + (right-left+1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
};