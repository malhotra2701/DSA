class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> d = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> days(12);
        days[0] = 0;
        for(int i=1;i<12;i++){
            days[i] = days[i-1] + d[i-1];
        }
        int a = days[stoi(arriveAlice.substr(0,2))-1] + stoi(arriveAlice.substr(3,2)) ;
        int b = days[stoi(leaveAlice.substr(0,2))-1] + stoi(leaveAlice.substr(3,2)) ;
        int c = days[stoi(arriveBob.substr(0,2))-1] + stoi(arriveBob.substr(3,2)) ;
        int e = days[stoi(leaveBob.substr(0,2))-1] + stoi(leaveBob.substr(3,2)) ;
        int x = max(a,c);
        int y = min(b,e);
        if(x>y){
            return 0;
        }
        return y-x+1;
    }
};