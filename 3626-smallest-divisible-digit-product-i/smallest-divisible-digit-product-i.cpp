class Solution {
public:
    int smallestNumber(int n, int t) {
        for(long long i=n;i>=n;i++){
            long long p = 1;
            long long temp = i;
            while(temp!=0){
                p = p*(temp%10);
                temp=temp/10;
            }
            if(p%t==0){
                return i;
            }
        }
        return -1;
    }
};