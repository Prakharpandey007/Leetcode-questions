class Solution {
public:
 int isvowel( char c){
    if(c=='a'||c=='e'||c=='i'||c=='o' ||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        return true;
    }
    else{
return false;
    }
    
 }
    bool halvesAreAlike(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n/2;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(isvowel(s[i])){
                count--;
            }
        }
        if(count ==0) return true;
        return false;

    }
};