class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int pro=1,maxp=nums[0];
        for(int i=0;i<n;i++){
            pro*=nums[i];
            maxp=max(maxp,pro);
            if(nums[i]==0) pro=1;
        }
        pro = 1;
        for (int i = n - 1; i >= 0; i--) {
            pro *= nums[i];
            maxp = max(maxp, pro);

            if (pro == 0)
                pro = 1;
        }
        return maxp;
    }
};
