class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,int> m;
        int n =nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[j]%2==0){
                    mp[nums[j]]++;
                }
                else{
                    m[nums[j]]++;
                }
                if(mp.size()==m.size()){
                    res = max(res,j-i+1);
                }
            }
            mp.clear();
            m.clear();
        }
        return res;
    }
};