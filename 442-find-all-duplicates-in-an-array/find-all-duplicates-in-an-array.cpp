class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>duplicate;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                duplicate.push_back(nums[i]);
            }
            else{
                s.insert(nums[i]);
            }

        }
        return duplicate;
    }
};