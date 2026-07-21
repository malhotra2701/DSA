class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int prefixsum = 0;
        int count = 0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum += nums[i];
            int remove = prefixsum - k;
            if(mp[remove]){
                count = count + mp[remove];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};