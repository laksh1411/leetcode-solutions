class Solution {
public:
    void getsubsets(vector<int>& nums,vector<int>& arr,int i,vector<vector<int>>& allsubs){
        if(i==nums.size()){
            allsubs.push_back({arr});
            return;
        }
        arr.push_back(nums[i]);
        getsubsets(nums,arr,i+1,allsubs);

        arr.pop_back();
        getsubsets(nums,arr,i+1,allsubs);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubs;
        vector<int> arr;
        getsubsets(nums,arr,0,allsubs);
        return allsubs;
    }
};
