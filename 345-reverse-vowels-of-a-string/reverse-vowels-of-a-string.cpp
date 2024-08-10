class Solution {
public:
bool vowel( char &ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 1;
    return 0;
}
    string reverseVowels(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(!vowel(s[l])){
                l++;
            }
            else if(!vowel(s[r])){
                r--;
            }
            else {
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};