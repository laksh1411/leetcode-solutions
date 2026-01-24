class Solution {
public:
    int robans(vector<int>& nums,int l,int r){
        int prev1=0;
        int prev2=0;
        int curr=0;
        for(int i=l;i<=r;i++){
            curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int x=robans(nums,0,nums.size()-2);
        int y=robans(nums,1,nums.size()-1);
        return max(x,y);
    }
};
