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
            if(temp[k]>1 && temp[k]%2==0){
                while(temp[k]!=0){
                    s[i]=(char)('a' + k);
                    s[j]=(char)('a' + k);
                    i++;
                    j--;
                    temp[k] -= 2;
                }
            }
            else if(temp[k]>1 && temp[k]%2!=0){
                while(temp[k]!=1){
                    s[i]=(char)('a' + k);
                    s[j]=(char)('a' + k);
                    i++;
                    j--;
                    temp[k] -= 2;
                }
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