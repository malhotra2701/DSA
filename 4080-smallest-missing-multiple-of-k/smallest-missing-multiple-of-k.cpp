class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int temp =1;
        while(true){
            bool flag = true;
            int target = temp*k;
            for(int i=0;i<n;i++){
                if(nums[i]==target){
                    flag = false;
                }
            }
            if(flag){
                return target;
            }
            temp++;
        }
        return -1;
    }
};