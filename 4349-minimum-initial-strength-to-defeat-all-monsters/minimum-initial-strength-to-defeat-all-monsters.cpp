class Solution {
public:
    bool checker(long long strength,vector<long long> &temp,vector<int> &monsters){
        for(int i=0;i<monsters.size();i++){
            if(strength<0){
                strength = 0;
            }
            if(strength + temp[i] < monsters[i]){
                return false;
            }
            strength = strength - monsters[i];
        }
        return true;
    }
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();
        int s = boosts.size();
        vector<long long> temp(n,0);
        for(int i=0;i<s;i++){
            int start = boosts[i][0];
            int end = boosts[i][1];
            temp[start] += boosts[i][2];
            if(end<n-1){
                temp[end+1] -= boosts[i][2];
            }
        }
        for(int i=1;i<n;i++){
            temp[i] += temp[i-1];
        }
        long long low = 0;
        long long high = 0;
        for(int i=0;i<n;i++){
            high += monsters[i];
        }
        long long ans = high;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(checker(mid,temp,monsters)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};