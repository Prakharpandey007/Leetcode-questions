class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>arr;
        double avg;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            avg=(nums[i]+nums[n-i-1])/2.0;
            arr.push_back(avg);

        }
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};