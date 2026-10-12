class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;
        unordered_map<char,int> mp;
        int left = 0;
        for(int right = 0;right<n;right++){
            mp[s[right]]++;
            while(mp[s[right]]>1 && left<=right){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            res = max (res,right-left+1);
        }
        return res;
    }
};