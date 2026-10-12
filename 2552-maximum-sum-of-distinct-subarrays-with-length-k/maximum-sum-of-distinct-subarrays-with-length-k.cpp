class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum += nums[i];
        }
        long long res = 0;
        if(mp.size()==k){
            res = sum;
        }
        for(int i=k;i<n;i++){
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            sum = sum + nums[i] - nums[i-k];
            if(mp.size()==k){
                res = max(res,sum);
            }
        }
        return res;
    }
};