class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            string temp = "";
            int count = 0;
            for(int j=i;j<n;j++){
                temp += s[j];
                if(s[j]=='1'){
                    count++;
                }
                if(count>k){
                    break;
                }
                if(count==k){
                    if(res.empty() || (temp.size()<res.size()) || (temp.size()==res.size() && temp<res)){
                        res = temp;
                    }
                }
            }
        }
        return res;
    }
};