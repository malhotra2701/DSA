class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==0 || odd==0){
            return true;
        }
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            mn = min(mn,nums1[i]);
        }
        if(mn%2==0){
            return false;
        }
        return true;
    }
};
//TC O(N)
//SC O(1)