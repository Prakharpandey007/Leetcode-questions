class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sorted;
        int n=heights.size();
        for(int i=0;i<n;i++){
            sorted.push_back(heights[i]);
        }
        sort(sorted.begin(),sorted.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=sorted[i]) count++;
        }
        return count;
    }
};