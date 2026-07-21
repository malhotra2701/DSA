class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int temp = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                temp++;
            }
            int remove = temp - k;
            count = count + mp[remove];
            mp[temp]++;
        }
        return count;
    }
};