class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        int size = nums.size();
        vector<int> temp(size,0);
        for(int i=0;i<n;i++){
            int start = queries[i][0];
            int end = queries[i][1];
            temp[start] += 1;
            if(end<size-1){
                temp[end+1] -= 1;
            }
        }
        for(int i=1;i<size;i++){
            temp[i] += temp[i-1];
        }
        for(int i=0;i<size;i++){
            if(temp[i]<nums[i]){
                return false;
            }
        }
        return true;
    }
};