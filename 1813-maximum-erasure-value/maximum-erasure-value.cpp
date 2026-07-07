class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int sum = 0;
        int res = 0;
        unordered_set<int> st;
        for(int right=0;right<n;right++){
            while(st.find(nums[right])!=st.end()){
                st.erase(nums[left]);
                sum = sum - nums[left];
                left++;
            }
            st.insert(nums[right]);
            sum = sum + nums[right];
            res = max(sum,res);
        }
        return res;
    }
};