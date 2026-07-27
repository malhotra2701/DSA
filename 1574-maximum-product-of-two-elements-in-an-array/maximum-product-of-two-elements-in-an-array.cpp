class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]==mx){
                count++;
            }
        }
        if(count>1){
            return (mx-1)*(mx-1);
        }
        int smx = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]!=mx){
                smx = max(smx,nums[i]);
            }
        }
        return (smx-1)*(mx-1);
    }
};