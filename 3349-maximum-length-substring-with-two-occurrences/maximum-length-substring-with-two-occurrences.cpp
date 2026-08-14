class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int res = 0;
        int n = s.size();
        unordered_map<char,int> mp;
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            while(mp[s[right]]>2 && left<=right){
                mp[s[left]]--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};