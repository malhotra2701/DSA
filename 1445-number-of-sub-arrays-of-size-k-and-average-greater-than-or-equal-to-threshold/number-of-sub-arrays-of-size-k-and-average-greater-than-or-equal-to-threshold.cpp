class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        double sum = 0;
        int count = 0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        double res = sum/k;
        if(res>=threshold){
            count++;
        }
        int left = 0;
        for(int right=k;right<n;right++){
            sum += arr[right];
            sum -= arr[left];
            res = sum/k;
            if(res>=threshold){
                count++;
            }
            left++;
        }
        return count;
    }
};