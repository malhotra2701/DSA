class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        int s = nums.size();
        vector<int> temp(s,0);
        for(int i=0;i<n;i++){
            int start = queries[i][0];
            int end = queries[i][1];
            temp[start] += 1;
            if(end<s-1){
                temp[end+1] -= 1;
            }
        }
        int sum = 0;
        for(int i=0;i<s;i++){
            sum += temp[i];
            if(sum<nums[i]){
                return false;
            }
        }
        return true;
    }
};