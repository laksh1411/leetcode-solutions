class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>arr;
        int st=0,end=n-1;
        while(st<end){
            if(nums[st]+nums[end]>target)end--;
            else if(nums[st]+nums[end]<target)st++;
            else{
                arr.push_back(st+1);
                arr.push_back(end+1);
                break;
            }
        }
        return arr;
    }
};
