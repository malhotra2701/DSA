class Solution {
public:
    int maximumUnits(vector<vector<int>>& x, int y) {
        int n = x.size();
        sort(x.begin(),x.end(),[] (const vector<int> &a, const vector<int> &b){
            return a[1]>b[1];
        });
        int res = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            if(temp + x[i][0] > y){
                res += (y-temp)*x[i][1];
                break;
            }
            temp += x[i][0];
            res += x[i][0]*x[i][1];
        }
        return res;
    }
};