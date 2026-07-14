class Solution {
public:
    bool checkValid(vector<vector<int>>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            unordered_set<int> s;
            for(int j=0;j<n;j++){
                if(st.find(arr[i][j])!=st.end()){
                    return false;
                }
                else{
                    st.insert(arr[i][j]);
                }
                if(s.find(arr[j][i])!=s.end()){
                    return false;
                }
                else{
                    s.insert(arr[j][i]);
                }
            }
            st.clear();
            s.clear();
        }
        return true;
    }
};