class Solution {
public: 
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int k = mp.size() - 1;
        int left = 0;
        unordered_map<int,int> m;
        int count = 0;
        for(int right=0;right<n;right++){
            m[nums[right]]++;
            while(m.size()>k && left<=right){
                m[nums[left]]--;
                if(m[nums[left]]==0){
                    m.erase(nums[left]);
                }
                left++;
            }
            count += right-left+1;
        }
        return ((n)*(n+1))/2 - count;
    }
};