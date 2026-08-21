class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& nums) {
        sort(lights.begin(),lights.end());
        int res = 0;
        int mx = lights.back();
        for(int i=0;i<nums.size();i++){
            int r = nums[i]%period;
            if(r>=mx){
                res = max(res,period - r);
            }
        }
        return res;
    }
};