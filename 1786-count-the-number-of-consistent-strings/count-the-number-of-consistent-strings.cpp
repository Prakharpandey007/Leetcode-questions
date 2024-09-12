class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto it:allowed) {
            mp[it]++;
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            bool present=true;
            for(int j=0;j<words[i].size();j++){
                if(mp.find(words[i][j])==mp.end()){
                    present=false;
                    
                }
            }
             if(present) count++;
        }
        return count;
    }
};