class Solution {
public:
    int numSub(string s) {
        long long count = 0;
        long long res = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                res = res + ((count)*(count+1))/2;
                count=0;
            }
        }
        res = res + ((count)*(count+1))/2;
        long long mod = 1e9 + 7;
        return res%mod;
    }
};