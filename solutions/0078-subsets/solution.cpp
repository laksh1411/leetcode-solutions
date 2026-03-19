class Solution {
public:
    void getsubs(vector<int>& nums,int index,vector<int>& arr,vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back({arr});
            return;
        }
        arr.push_back(nums[index]);
        getsubs(nums,index+1,arr,ans);
        arr.pop_back();
        getsubs(nums,index+1,arr,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        getsubs(nums,0,arr,ans);
        return ans;
    }
};
