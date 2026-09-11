class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int res = 0;
        for(int i=100;i<1000;i++){
            if(i%2!=0){
                continue;
            }
            vector<bool> temp(n,false);
            bool valid = true;
            if(i%2==0){
                string x = to_string(i);
                for(int j=0;j<3;j++){
                    bool ok = false;
                    int target = x[j]-'0';
                    for(int k=0;k<n;k++){
                        if(temp[k]==false){
                            if(target==digits[k]){
                            temp[k]=true;
                            ok = true;
                            break;
                            }
                        }
                    }
                    if(ok==false){
                        valid = false;
                    break;
                }
                }
            }
            if(valid)
            res++;
        }
        return res;
    }
};