class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>s;
        int idx=0;
       for(int i=1;i<=n && idx<target.size();i++){
               if(i==target[idx]){
                s.push_back("Push");
                idx++;
               }
               else{
               s.push_back("Push");
               s.push_back("Pop");
              
               }
       }
       return s;
    }
};