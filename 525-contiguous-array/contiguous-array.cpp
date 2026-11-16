class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        int sum = 0;
        int res = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum += -1;
            }
            else{
                sum += 1;
            }
            if(sum==0){
                res = max(res,i+1);
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    res = max(res,i-mp[sum]);
                }
            }
            if(mp.find(sum)==mp.end()){
                mp[sum] = i;
            }
        }
        return res;
    }
};