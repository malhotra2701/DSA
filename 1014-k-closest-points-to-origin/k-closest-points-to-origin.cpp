class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>> res;
        sort(points.begin(),points.end(),[](const vector<int> &a,vector<int> &b){
            return a[0]*a[0] + a[1]*a[1] < b[0]*b[0] + b[1]*b[1];
        });
        for(int i=0;i<n;i++){
            if(i>k-1){
                return res;
            }
            res.push_back({points[i][0],points[i][1]});
        }
        return res;
    }
};