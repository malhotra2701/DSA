class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                count++;
            }
        }
        int res = count;
        for(int i=k;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                count++;
            }
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='o' || s[i-k]=='i' || s[i-k]=='u'){
                count--;
            }
            res = max(res,count);
        }
        return res;
    }
};