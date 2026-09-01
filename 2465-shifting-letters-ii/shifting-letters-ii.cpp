class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = shifts.size();
        int size = s.size();
        vector<int> temp(size,0);
        for(int i=0;i<n;i++){
            int start = shifts[i][0];
            int end = shifts[i][1];
            if(shifts[i][2]==1){
                temp[start] += 1;
                if(end<size-1)
                temp[end + 1] -= 1;
            }
            else{
                temp[start] -= 1;
                if(end<size-1)
                temp[end + 1] += 1;
            }
        }
        for(int i=1;i<size;i++){
            temp[i] += temp[i-1];
        }
        for(int i=0;i<size;i++){
            temp[i] = temp[i]%26;
            if(temp[i]<0){
                temp[i] += 26;
            }
        }
        for(int i=0;i<size;i++){
            s[i] = ((s[i]-'a') + temp[i])%26 + 'a';
        }
        return s;
    }
};