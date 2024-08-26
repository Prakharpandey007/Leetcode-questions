class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mul;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
               mul=(nums[i]-1)*(nums[j]-1);
            }
        }
        return mul;
    }
};