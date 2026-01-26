class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            int rm=target-nums[i];
            if(ans.find(rm)!=ans.end()){
                return {ans[rm],i};
            }
            ans[nums[i]]=i;
        }
        return {};
    }
};
