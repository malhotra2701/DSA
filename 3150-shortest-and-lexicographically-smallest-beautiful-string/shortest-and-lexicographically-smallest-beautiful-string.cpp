class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res = "";
        int n = s.size();
        int count =0;
        int left = 0;
        for(int right = 0;right<n;right++){
            if(s[right]=='1'){
                count++;
            }
            while(count>k){
                if(s[left]=='1'){
                    count--;
                }
                left++;
            }
            if(count == k){
                while(s[left]=='0'){
                    left++;
                }
                string temp = s.substr(left,right-left+1);
                if(res.empty() || (temp.size()<res.size())|| (temp.size()==res.size() && temp<res)){
                    res = temp;
                }
            }
        }
        return res;
    }
};