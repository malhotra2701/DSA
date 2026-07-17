class Solution {
public:
    string resultingString(string s) {
        stack<char> st;
        string result = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(abs(st.top()-s[i])==1 || abs(st.top()-s[i])==25){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res ="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};