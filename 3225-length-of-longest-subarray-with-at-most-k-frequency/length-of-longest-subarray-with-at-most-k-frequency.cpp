class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res = 0;
        int left = 0;
        int n = nums.size();
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k && left<=right){
                mp[nums[left]]--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};