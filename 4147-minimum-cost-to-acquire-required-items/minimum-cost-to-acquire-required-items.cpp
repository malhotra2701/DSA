class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,
                          int need2) {
        long long res = 0;
        if (costBoth > cost1 + cost2) {
            return (long long)need1 * cost1 + (long long)need2 * cost2;
        } else {
            int x = min(need1, need2);
            res += (long long)x * costBoth;
            int y = max(need1, need2);
            if (x != y) {
                if (y == need1) {
                    if (cost1 < costBoth) {
                        res += (long long)cost1 * (y - x);
                    }
                    else{
                        res += (long long)costBoth*(y-x);
                    }
                    } else {
                        if (cost2 < costBoth) {
                            res += (long long)cost2 * (y - x);
                        }
                    else{
                        res += (long long)costBoth*(y-x);
                    }
                    }
                }
        }
        return res;
    }
};