class Solution {
public:
    int helper(string &s,int k, char x){
        int n = s.size();
        int left = 0;
        int res = 0;
        int count = 0;
        for(int right=0;right<n;right++){
            if(s[right]==x){
                count++;
            }
            while(count>k && left<=right){
                if(s[left]==x){
                    count--;
                }
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
    int maxConsecutiveAnswers(string s, int k) {
        return max(helper(s,k,'F'),helper(s,k,'T'));
    }
};