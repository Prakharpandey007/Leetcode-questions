class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fivecount=0;
        int tencount=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                fivecount++;
            }
            else if (bills[i]==10){
                if(fivecount==0) return false;
                else{
                    fivecount--;
                    tencount++;
                }
            }
            else{
                if((fivecount==0)||(fivecount<3 && tencount==0)) return false;
                else if(tencount==0){
                   fivecount-=3;
                }
                else{
                    fivecount--;
                    tencount--;
                }
            }
        }
        return true;
    }
};