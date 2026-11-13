class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int res = 0;
        for(int i=0;i<n;i++){
            vector<int> f(26,0);
            for(int j=i;j<n;j++){
                f[s[j]-'a']++;
                int mx = INT_MIN;
                int mn = INT_MAX;
                for(int k=0;k<26;k++){
                    if(f[k]>0){
                        mx = max(f[k],mx);
                        mn = min(f[k],mn);
                    }
                }
                res += mx - mn;
            }
        }
        return res;
    }
};