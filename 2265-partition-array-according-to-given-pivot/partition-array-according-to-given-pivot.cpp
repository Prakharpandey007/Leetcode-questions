class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        vector<int>large;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                large.push_back(nums[i]);
            }
            else{
                large.insert(large.begin(),pivot);
            }

        }
        for(int i=0;i<large.size();i++){
            small.push_back(large[i]);
        }
        return small;
    }
};