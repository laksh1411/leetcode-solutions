class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0,end=nums.size()-1;
        int maxsum=0;
        while(st<end){
            int sum=nums[st]+nums[end];
            maxsum=max(sum,maxsum);
            st++,end--;
        }
        return maxsum;
    }
};

