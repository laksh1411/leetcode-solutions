class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int ans=0;
        for(int i=0;i<n;i++){
            int check=min(nums[left],nums[right])*(right-left);
            ans=max(ans,check);
            if(nums[left]>nums[right]) right--;
            else left++;
        }
        return ans;
    }
};
