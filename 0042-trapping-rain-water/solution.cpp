class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0;
        int rmax=0;
        int ans=0;
        int s=0;
        int r=height.size()-1;
        while(s<r){
            lmax=max(lmax,height[s]);
            rmax=max(rmax,height[r]);
            if(lmax<rmax){
                ans+=lmax-height[s++];
            }
            else {
                ans+=rmax-height[r--];
            }
        }
        return ans;
    }
};
