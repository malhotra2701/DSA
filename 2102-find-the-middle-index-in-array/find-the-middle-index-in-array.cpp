class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        for(int i=0;i<n;i++){
            rightsum = sum - nums[i]-leftsum;
            if(rightsum==leftsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};
//TC O(N)
//SC O(1)