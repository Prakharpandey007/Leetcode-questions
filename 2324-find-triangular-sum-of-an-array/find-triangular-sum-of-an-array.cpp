class Solution {
public:
    int triangularSum(vector<int>& nums) {
       
        int n=nums.size();
        while(n>1){
             vector<int>newNums;
            for(int i=0;i<n-1;i++){
                int sum=(nums[i]+nums[i+1])%10;
                newNums.push_back(sum);
                
            }
            n=newNums.size();
            nums=newNums;
        }
        return nums[0];
    }
};