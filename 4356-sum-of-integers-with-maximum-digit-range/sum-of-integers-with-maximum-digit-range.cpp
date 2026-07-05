class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            if(x==0){
                temp[i]=0;
                continue;
            }
            int mn = INT_MAX;
            int mx = INT_MIN;
            while(x!=0){
                int ld = x%10;
                mn = min(mn,ld);
                mx = max(mx,ld);
                x=x/10;
            }
            temp[i]=mx-mn;
        }
        int y=INT_MIN;
        for(int i=0;i<temp.size();i++){
            y=max(y,temp[i]);
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(temp[i]==y){
                sum = sum + nums[i];
            }
        }
        return sum;
    }
};