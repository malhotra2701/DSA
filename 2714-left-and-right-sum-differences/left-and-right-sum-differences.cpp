class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0;
        int rightsum = 0;
        int sum = 0;
        vector<int> result(n);
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        for(int i=0;i<n;i++){
            rightsum = sum - nums[i] - leftsum;
            result[i] = abs(rightsum - leftsum);
            leftsum = leftsum + nums[i];
        }
        return result;
    }
};