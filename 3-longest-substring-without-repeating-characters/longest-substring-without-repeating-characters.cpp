class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int res = 0;
        unordered_set<char> st;
        for(int right = 0;right<n;right++){
            while(st.find(s[right])!=st.end() && left<=right){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            res = max(res,right-left+1);
        }
        return res;
    }
};