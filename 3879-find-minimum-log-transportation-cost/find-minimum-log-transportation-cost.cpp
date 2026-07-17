class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(m<=k && n<=k){
            return 0;
        }
        long long x = max(n,m) - k;
        return x*(long long)k;
    }
};