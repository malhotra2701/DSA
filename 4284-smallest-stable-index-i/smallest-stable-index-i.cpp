class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        vector<int> temp(n);
        for(int i=n-1;i>=0;i--){
            mn = min(mn,nums[i]);
            temp[i]=mn;
        }
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            if(mx - temp[i] <=k){
                return i;
            }
        }
        return -1;
    }
};