class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string first="";
        string second="";
        string third="";
        for(auto x:firstWord){
            first+=to_string(x-'a');
        }
        for(auto x:secondWord){
            second+=to_string(x-'a');
        }
        for(auto x:targetWord){
            third+=to_string(x-'a');
        }
        if(stoi(first)+stoi(second)==stoi(third)){
            return true;
        }
        return false;
    }
};