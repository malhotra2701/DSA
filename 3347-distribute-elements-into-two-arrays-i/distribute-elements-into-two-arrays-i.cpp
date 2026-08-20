class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        int n = nums.size();
        for(int i=2;i<n;i++){
            if(temp1.back()>temp2.back()){
                temp1.push_back(nums[i]);
            }
            else{
                temp2.push_back(nums[i]);
            }
        }
        vector<int> res;
        for(int i=0;i<temp1.size();i++){
            res.push_back(temp1[i]);
        }
        for(int i=0;i<temp2.size();i++){
            res.push_back(temp2[i]);
        }
        return res;
   }
};