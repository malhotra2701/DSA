class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int left = 0;
        int res = INT_MAX;
        for(int right = 0;right<n;right++){
            mp[nums[right]]++;
            while(mp[nums[right]]==2 && left<=right){
                res = min(res , right-left+1);
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