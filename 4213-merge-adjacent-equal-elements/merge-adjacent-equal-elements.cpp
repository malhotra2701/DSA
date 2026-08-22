class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            long long x = nums[i];
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
//TC O(N)
//SC O(N)