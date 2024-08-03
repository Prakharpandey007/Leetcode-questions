class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int temp=0;
        for(int i=0;i<target.size();i++){
            if(target[i]!=arr[i]){
                temp=1;
                break;
            }
            else{
                temp=0;
            }
        }
        if(temp==0) return true;
        else return false;

    }
};