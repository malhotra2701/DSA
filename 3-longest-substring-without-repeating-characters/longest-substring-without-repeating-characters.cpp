class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> f(128,0);
        int left = 0;
        int res = 0;
        for(int right=0;right<n;right++){
            f[s[right]]++;
            while(f[s[right]]>1 && left<=right){
                f[s[left]]--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};