class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]+nums[n-i-1]>max){
                max=nums[i]+nums[n-1-i];
            }
        }
        return max;
        
            }
};