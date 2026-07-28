class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> temp(26,0);
        for(int i=0;i<n;i++){
            temp[s[i]-'a']++;
        }
        int i=0;
        int j=n-1;
        for(int k=0;k<temp.size();k++){
           while(temp[k]>=2){
            s[i]=(char)(k+'a');
            s[j]=(char)(k+'a');
            i++;
            j--;
            temp[k] -= 2;
           }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]==1){
                s[n/2]=(char)('a' + i);
            }
        }
        return s;
    }
};