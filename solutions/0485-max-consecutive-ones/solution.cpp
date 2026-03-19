class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int mc=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
                mc=max(mc,c);
            }
            else c=0;
        }
        return mc;
    }
};
