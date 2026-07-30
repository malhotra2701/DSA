class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(auto it : word){
            mp[it]++;
        }
        vector<pair<char,int>> f(mp.begin(),mp.end());
        sort(f.begin(),f.end(),[](pair<char,int> &a,pair<char,int> &b){
            return a.second>b.second;
        });
        int i = 0;
        int res = 0;
        while(i<f.size()){
            if(i<=7){
                res = res + f[i].second;
            }
            else if(i>=8 && i<=15){
                res = res + (f[i].second)*2;
            }
            else if(i>=16 && i<=23){
                res = res + (f[i].second)*3;
            }
            else{
                res = res + (f[i].second)*4;
            }
            i++;
        }
        return res;
    }
};