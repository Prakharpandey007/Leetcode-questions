class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int count=0;
        int i=0;
        int j=n-1;
        int capA=capacityA;
        int capB=capacityB;
        while(i<=j){
            if(capA>=plants[i]){  //here
                capA-=plants[i];
                i++;
            }
            else{
                capA=capacityA;
                count++;
                capA-=plants[i];
                i++;
                }
            if(capB>=plants[j]){  //here
                capB-=plants[j];
                j--;
            }    
            else{
                capB=capacityB;
                count++;
                capB-=plants[j];
                j--;
            }
            if(i==j){
                if(capA>=capB){  //here
                    if(capA>=plants[i]){  //here
                        capA-=plants[i];
                        i++;
                    }
                    else{
                        capA=capacityA;
                        count++;
                        capA-=plants[i];
                        i++;
                    }

                }
                else{
                    if(capB>=plants[j]){  //here
                        capB-=plants[j];
                        j--;
                    }
                    else{
                        capB=capacityB;
                        count++;
                        capB-=plants[i];
                        j--;
                    }
                }
            }
        }
        return count;
    }
};