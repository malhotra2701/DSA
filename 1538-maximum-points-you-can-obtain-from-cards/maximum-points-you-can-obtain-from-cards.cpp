class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum = 0;
        int rsum = 0;
        int res = 0;
        for(int i=0;i<k;i++){
            lsum += nums[i];
        }
        res = lsum;
        int i = k-1;
        int j = n-1;
        while(i>=0){
            lsum -= nums[i];
            rsum += nums[j];
            i--;
            j--;
            res = max(res,lsum+rsum);
        }
        return res;
    }
};