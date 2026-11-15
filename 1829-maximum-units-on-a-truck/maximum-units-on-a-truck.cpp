class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),[] (vector<int> &a,vector<int> &b){
            return a[1]>b[1];
        });
        int res = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            if(temp + boxTypes[i][0] > truckSize){
                res += (truckSize - temp)*boxTypes[i][1];
                break;
            }
            temp += boxTypes[i][0];
            res += boxTypes[i][0]*boxTypes[i][1];
        }
        return res;
    }
};