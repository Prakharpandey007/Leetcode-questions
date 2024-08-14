class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0;
        for(int i=0;i<words.size();i++){
            int n=words[i].size();
            string str=s.substr(0,n);
            if(words[i]==str){
                count++;
            }
            
        }
        return count;
    }
};