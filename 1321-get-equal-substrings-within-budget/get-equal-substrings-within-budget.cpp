class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int res = 0;
        int left = 0;
        int temp = 0;
        for(int right=0;right<n;right++){
            temp += abs(s[right]-t[right]);
            while(temp>maxCost && left<=right){
                temp -= abs(s[left]-t[left]);
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};