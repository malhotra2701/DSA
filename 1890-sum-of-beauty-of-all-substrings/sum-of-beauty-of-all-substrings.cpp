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
                for(int i=0;i<26;i++){
                    if(f[i]>0){
                        mx = max(mx,f[i]);
                        mn = min(mn,f[i]);
                    }
                }
                if(mx!=mn){
                    res += mx - mn;
                }
            }
        }
        return res;
    }
};