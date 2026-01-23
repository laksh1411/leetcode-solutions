class Solution {
public:
    void getperms(vector<int>& nums,int index,vector<vector<int>>& allperms){
        if(index==nums.size()){
            allperms.push_back({nums});
            return;
        }
        unordered_set<int> dummy;
        for(int i=index;i<nums.size();i++){
            //if(i>index && nums[i]==nums[index]) continue;
            if(dummy.count(nums[i])) continue;
            dummy.insert(nums[i]);
            swap(nums[i],nums[index]);
            getperms(nums,index+1,allperms);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allperms;
        getperms(nums,0,allperms);
        return allperms;
    }
};
