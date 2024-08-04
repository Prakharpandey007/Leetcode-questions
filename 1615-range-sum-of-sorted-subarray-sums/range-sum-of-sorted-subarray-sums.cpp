class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            int sub=0;
            for(int j=i;j<n;j++){
                sub+=nums[j];
                ans.push_back(sub);
            }
        }
        sort(ans.begin(),ans.end());
        int mod=1000000007;
        int opt=0;
        for(int i=left-1;i<right;i++){
            opt=(opt+ans[i])%mod;
        }
        return opt;
    }
};