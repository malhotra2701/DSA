class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(auto it : word){
            mp[it]++;
        }
        int i = 0;
        int res = 0;
        while(i<mp.size()){
            if(i<=7){
                res++;
            }
            else if(i>=8 && i<=15){
                res += 2;
            }
            else if(i>=16 && i<=23){
                res += 3;
            }
            else{
                res += 4;
            }
            i++;
        }
        return res;
    }
};