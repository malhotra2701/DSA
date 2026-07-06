class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0;
        int n = s.size();
        int cost = 0;
        int res = 0;
        for(int right=0;right<n;right++){
            if(s[right]!=t[right]){
                cost = cost + abs(s[right]-t[right]);
            }
            while(cost>maxCost && left<=right){
                if(s[left]!=t[left]){
                    cost = cost - abs(s[left]-t[left]);
                }
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};