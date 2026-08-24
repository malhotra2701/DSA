class Solution {
public:
    int minAllOneMultiple(int k) {
        int temp = 0;
        for(int i=1;i<=k;i++){
            temp = (temp*10 + 1)%k;
            if(temp==0){
                return i;
            }
        }
        return -1;
    }
};