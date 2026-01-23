class Solution {
public:
    void getperms(vector<int>& nums,int index,vector<vector<int>>& allperms){
        if(index==nums.size()){
            allperms.push_back({nums});
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            getperms(nums,index+1,allperms);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allperms;
        getperms(nums,0,allperms);
        return allperms;
    }
};
