class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        sort(points.begin(),points.end(),[](const vector<int> &a,vector<int> &b){
            return 1LL*a[0]*a[0] + 1LL*a[1]*a[1] < 1LL*b[0]*b[0] + 1LL*b[1]*b[1];
        });
        return vector<vector<int>>(points.begin(),points.begin() + k);
    }
};