class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int st=0;int mid=0;int end=n-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[st]);
                st++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};
