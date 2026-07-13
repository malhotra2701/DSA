class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //all the numbers in range will be substrings of "123456789", use slding window concept
        string temp = "123456789";
        vector<int> res;
        for(int i=0;i<9;i++){
            for(int j=i;j<9;j++){
                string x = temp.substr(i,j-i+1);
                if(stoi(x)>=low && stoi(x)<=high){
                    res.push_back(stoi(x));
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};