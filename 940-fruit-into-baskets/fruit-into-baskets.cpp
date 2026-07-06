class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int res = 0;
        unordered_map<int,int> mp;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp.size()>2 && left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};