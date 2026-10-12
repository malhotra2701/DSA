class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double res = sum/k;
        int left = 0;
        for(int right = k;right<n;right++){
            sum += nums[right];
            sum -= nums[left];
            res = max(res,sum/k);
            left++;
        }
        return res;
    }
};