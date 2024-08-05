class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>result;
      
        for(int i=0;i<queries.size();i++){
              int count=0;
            int x=queries[i][0],y=queries[i][1];
            for(int j=0;j<points.size();j++){
                int p1=points[j][0], p2=points[j][1];
                int a=pow((points[j][0]-queries[i][0]),2);
                int b=pow((points[j][1]-queries[i][1]),2);
                if(sqrt(a+b)<=queries[i][2]){
                    count++;
                }

            }
             result.push_back(count);
        }
        return result;
    }
};