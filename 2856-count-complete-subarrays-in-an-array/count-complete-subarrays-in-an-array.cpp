class Solution {
public: 
    int helper(vector<int> &nums,int k){
        unordered_map<int,int> mp;
        int count = 0;
        int n = nums.size();
        int left = 0;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp.size()>k && left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int k = mp.size();
        return helper(nums,k) - helper(nums,k-1);
    }
};