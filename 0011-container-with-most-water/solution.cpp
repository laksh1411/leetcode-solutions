class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,ans=0;
        while(lp<rp){
            int wt=rp-lp;
            int ht=min(height[rp],height[lp]);
            int curr=wt*ht;
            ans=max(ans,curr);
            if(height[rp]<height[lp]) rp--;
            else lp++;
        }
        return ans;
    }
};
