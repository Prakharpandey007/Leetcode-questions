class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int n=words[i].size();
            int temp=0;
            for(int j=0;j<n/2;j++){
                
                if(words[i][j]!=words[i][n-j-1]){
                    temp=1;
                    
                }
               
            }
            if(temp==0) {
                return words[i];
            }
        }
        return "";
    }
    
};