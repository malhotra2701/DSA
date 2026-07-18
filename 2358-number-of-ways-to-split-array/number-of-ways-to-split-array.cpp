class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        long long res = 0;
        int count = 0;
        for(int i=0;i<n-1;i++){
            res = res + nums[i];
            if(2*res >= sum){
                count++;
            }
        }
        return count;
    }
};