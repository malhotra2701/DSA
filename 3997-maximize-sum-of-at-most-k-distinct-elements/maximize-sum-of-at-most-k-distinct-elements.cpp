class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int> ());
        unordered_map<int,int> mp;
        int count=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==1){
                temp.push_back(nums[i]);
                count++;
            }
            if(count==k){
                break;
            }
        }
        return temp;
    }
};