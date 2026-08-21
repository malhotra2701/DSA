class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int res = INT_MAX;
        int temp = res;
        int result = -1;
        for(int i=0;i<drones.size();i++){
            int dist = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            if(dist<=drones[i][2]){
                res = min(res,dist);
                if(res!=temp){
                    result = i;
                }
                temp = res;
            }
        }
        return result;
    }
};