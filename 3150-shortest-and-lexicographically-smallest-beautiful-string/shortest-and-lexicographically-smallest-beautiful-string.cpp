class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res = "";
        for(int i=0;i<s.size();i++){
            int count = 0;
            string temp = "";
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    count++;
                }
                temp += s[j];
                if(count == k){
                    if(res.empty()|| (temp.size()<res.size()) || (temp.size()==res.size() && temp<res)){
                        res = temp;
                    }
                }
            }
        }
        return res;
    }
};