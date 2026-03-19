class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,end=n-1,mid=0;
        while(st<=end){
           int mid=st+(end-st)/2;
           if(target==nums[mid])return mid;
            if(target>nums[mid]) st=mid+1;
            else if(target<nums[mid])end=mid-1;
        }
        return st;
    }
};
