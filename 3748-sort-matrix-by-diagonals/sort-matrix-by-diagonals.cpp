class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int diff = 0;
        int n = grid.size();
        while(diff<n){
            vector<int> temp;
            for(int i=0;i<n;i++){
                for(int j =0;j<n;j++){
                    if(i-j==diff){
                        temp.push_back(grid[i][j]);
                    }
                }
            }
            int m = 0;
            sort(temp.begin(),temp.end(),greater<int>());
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i-j==diff){
                        grid[i][j]=temp[m];
                        m++;
                    }
                }
            }
            diff++;
            temp.clear();
        }
        int res = 1;
        while(res<n){
            vector<int> t;
            for(int i=0;i<n;i++){
                for(int j =0;j<n;j++){
                    if(j-i==res){
                        t.push_back(grid[i][j]);
                    }
                }
            }
            int p = 0;
            sort(t.begin(),t.end());
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j-i==res){
                        grid[i][j]=t[p];
                        p++;
                    }
                }
            }
            res++;
            t.clear();
        }
        return grid;
    }
};