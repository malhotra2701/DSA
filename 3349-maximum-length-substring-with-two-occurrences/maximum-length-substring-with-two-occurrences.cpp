class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int res = 0;
        int n = s.size();
        vector<int> f(26,0);
        for(int right=0;right<n;right++){
            f[s[right]-'a']++;
            while(f[s[right]-'a']>2 && left<=right){
                f[s[left]-'a']--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};