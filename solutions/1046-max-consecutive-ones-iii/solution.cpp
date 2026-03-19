class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,l=0,zc=0,maxlen=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]==0) zc++;
            if(zc>k){
                if(nums[l]==0){
                    zc--;
                }
                l++;
            }
            if(zc<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};
