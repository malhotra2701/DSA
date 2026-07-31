class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int res = 0;
        for(int i=0;i<n;i++){
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
        }
        return res;
    }
};