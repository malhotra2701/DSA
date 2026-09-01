class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& arr) {
        int n = arr.size();
        int diff = 0;
        while(diff<n){
            vector<int> temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i-j==diff){
                        temp.push_back(arr[i][j]);
                    }
                }
            }
            sort(temp.begin(),temp.end(),greater<int>());
            int m = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i-j==diff){
                        arr[i][j]=temp[m];
                        m++;
                    }
                }
            }
            temp.clear();
            diff++;
        }
        int res = 1;
        while(res<n){
            vector<int> t;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j-i==res){
                        t.push_back(arr[i][j]);
                    }
                }
            }
            sort(t.begin(),t.end());
            int p = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j-i==res){
                        arr[i][j]=t[p];
                        p++;
                    }
                }
            }
            t.clear();
            res++;
        }
        return arr;
    }
};