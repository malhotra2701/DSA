class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int res = INT_MAX;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            if(mp[nums[right]]==1){
                sum = sum + nums[right];
            }
            while(sum>=k && left<=right){
                res = min(res,right-left+1);
                if(mp[nums[left]]==1){
                    sum = sum - nums[left];
                }
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};