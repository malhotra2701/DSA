class Solution {
public:
    long long sumAndMultiply(int n) {
        string res = "";
        while(n!=0){
            if(n%10 !=0){
                res=res+(to_string)(n%10);
            }
            n=n/10;
        }
        if(res==""){
            return 0;
        }
        long long sum = 0;
        for(int i=0;i<res.size();i++){
            sum = sum + (res[i]-'0');
        }
        reverse(res.begin(),res.end());
        return sum*(stoll(res));
    }
};