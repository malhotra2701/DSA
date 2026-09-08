class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        for(int i=1;i<=n;i++){
            string x = to_string(i);
            if(x.size()>3){
                if(x.size()%3==0){
                    count += (x.size()/3) -1;
                }
                else{
                    count += x.size()/3;
                }
            }
        }
        return count;
    }
};