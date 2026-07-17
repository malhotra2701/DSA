class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        vector<int> temp;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            temp.push_back(gcd(mx,nums[i]));
        }
        sort(temp.begin(),temp.end());
        int i=0;
        int j=n-1;
        long long res = 0;
        while(i<j){
            res = res + gcd(temp[i],temp[j]);
            i++;
            j--;
        }
        return res;
    }
};