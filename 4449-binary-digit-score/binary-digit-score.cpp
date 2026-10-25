class Solution {
public:
    int calculateScore(int a, int b) {
        int c = 0;
        while(a!=0){
            if(a%2!=0){
                c++;
            }
            a = a/2;
        }
        int d = 0;
        while(b!=0){
            if(b%2!=0){
                d++;
            }
            b = b/2;
        }
        if(c>=d){
            return c*d;
        }
        return d/c;
    }
};