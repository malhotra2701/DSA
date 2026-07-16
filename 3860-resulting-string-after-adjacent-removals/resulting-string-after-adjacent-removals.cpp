class Solution {
public:
    string resultingString(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(abs((s[i]-'a')-(st.top()-'a'))==1 || abs((s[i]-'a')-(st.top()-'a'))==25){
                st.pop();
            }
            else
            st.push(s[i]);
        }
        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};