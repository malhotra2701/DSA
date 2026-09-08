class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int left = 0;
        int res = 0;
        unordered_map<char,int> mp;
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            while(mp[s[right]]>=k && left<=right){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            res += right-left+1;
        }
        return (n*(n+1))/2 - res;
    }
};