class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char,int>mp1;
       unordered_map<char,int>mp2;
       int count=0;
       for(int i=0;i<s.size();i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
       }
       for(auto it=mp1.begin();it!=mp1.end();it++){
        auto i =mp2.find(it->first);
        if(i!=mp2.end()){
            if((it->second)-(i->second)>0){
                count+=((it->second)-(i->second));

            }
        }
        else{
            count+=it->second;
        }
       }
       return count;

    }
};