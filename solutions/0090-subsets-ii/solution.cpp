class Solution {
public:
    void getsubset(vector<int>&nums,vector<int>&arr,int i,vector<vector<int>>& allsubs){
        int n=nums.size();
        if(i==n){
            allsubs.push_back({arr});
            return;
        }
        arr.push_back(nums[i]);
        getsubset(nums,arr,i+1,allsubs);
        arr.pop_back();

        int index=i+1;
        while(index<n && nums[index]==nums[index-1]){
            index++;
        }
        getsubset(nums,arr,index,allsubs);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubs;
        vector<int> arr;

        getsubset(nums,arr,0,allsubs);
        return allsubs;
    }
};
