class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>map;
        int n=names.size();
        for(int i=0;i<n;i++){
            map[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<n;i++){
           names[i]=map[heights[i]];
        }
        return names;
    }
};