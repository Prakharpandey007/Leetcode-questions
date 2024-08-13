class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0;
        int water=capacity;
        int n=plants.size();
        for(int i=0;i<n;i++){
            if(water>=plants[i]){
                count+=1;
                water=water-plants[i];
            }
            else{
                count=count+i;
                water=capacity;
                water=water-plants[i];
                count=count+(i+1);
            }
        }
        return count;
    }
};