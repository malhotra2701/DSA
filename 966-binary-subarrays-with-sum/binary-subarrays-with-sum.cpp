class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixsum = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        int count = 0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum += nums[i];
            int remove = prefixsum - goal;
            count = count + mp[remove];
            mp[prefixsum]++;
        }
        return count;
    }
};