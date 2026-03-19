class Solution {
public:
set<vector<int>> dummy;
    void getcomb(vector<int>& nums,vector<int>& arr,int index,int target,vector<vector<int>>& allcom){
        if(index==nums.size() || target<0){
            return;
        }
        
        if(target==0){
            if(dummy.find({arr})==dummy.end()){
                allcom.push_back({arr});
                dummy.insert({arr});
            }
            return;
        }


        arr.push_back(nums[index]);
        getcomb(nums,arr,index+1,target-nums[index],allcom);
        getcomb(nums,arr,index,target-nums[index],allcom);
        arr.pop_back();
        getcomb(nums,arr,index+1,target,allcom);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> allcom;
        vector<int>ans;
        getcomb(arr,ans,0,target,allcom);
        return allcom;
    }
};
