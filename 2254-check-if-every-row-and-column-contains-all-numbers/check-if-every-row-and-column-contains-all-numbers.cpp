class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=0;j<n;j++){
                if(st.find(mat[i][j])!=st.end()){
                    return false;
                }
                st.insert(mat[i][j]);
            }
            st.clear();
        }
        for(int j=0;j<n;j++){
            unordered_set<int> s;
            for(int i=0;i<n;i++){
                if(s.find(mat[i][j])!=s.end()){
                    return false;
                }
                s.insert(mat[i][j]);
            }
            s.clear();
        }
        return true;
    }
};