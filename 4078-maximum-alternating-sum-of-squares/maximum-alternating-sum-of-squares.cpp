class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a) < abs(b);
        });
        int i=0;
        int j=n-1;
        long long res = 0;
        while(i<j){
            res += (nums[j]*nums[j]) - (nums[i]*nums[i]);
            i++;
            j--;
        }
        if(n%2!=0){
            res += nums[n/2]*nums[n/2];
        }
        return res;
    }
};