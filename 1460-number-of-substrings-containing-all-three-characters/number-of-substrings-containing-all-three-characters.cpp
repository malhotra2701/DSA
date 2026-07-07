class Solution {
public:
    int numberOfSubstrings(string s) {
        int right = 0;
        int n = s.size();
        unordered_map<char,int> mp;
        int count = 0;
        int left = 0;
        for(int right = 0;right<n;right++){
            mp[s[right]]++;
            while(mp.size()==3 && left<=right){
                count = count + (n-right);
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
        }
        return count;
    }
};