class Solution {
public:
    bool helper(long long strength,vector<int> &monsters,vector<long long> &temp){
        int s = monsters.size();
        for(int i=0;i<s;i++){
            if(strength + temp[i] < monsters[i]){
                return false;
            }
            strength = strength - monsters[i];
            if(strength <= 0){
                strength = 0;
            }
        }
        return true;
    }
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int s = monsters.size();
        int n = boosts.size();
        vector<long long> temp(s,0);
        for(int i=0;i<n;i++){
            int start = boosts[i][0];
            int end = boosts[i][1];
            temp[start] += boosts[i][2];
            if(end<s-1){
                temp[end+1] -= boosts[i][2];
            }
        }
        for(int i=1;i<s;i++){
            temp[i] += temp[i-1];
        }
        long long low = 0;
        long long high = 0;
        for(int i=0;i<s;i++){
            high += monsters[i];
        }
        long long ans = high;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(helper(mid,monsters,temp)){
                high = mid-1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};