class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int p = 1;
        while(temp!=0){
            int x = temp%10;
            sum += x;
            p = p*x;
            temp = temp/10;
        }
        if(n%(sum+p)==0){
            return true;
        }
        return false;
    }
};