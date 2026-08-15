class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for(int i=0;i<nums.size();i++){
            long long x = nums[i];
            if(st.empty()){
                st.push(x);
                continue;
            }
            while(!st.empty() && st.top()==x){
                x += st.top();
                st.pop();
            }
            st.push(x);
        }
        vector<long long> temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};