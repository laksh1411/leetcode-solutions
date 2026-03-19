class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int l=0,e=n-1;
        int maxi=0;
        for(int i=0;i<n;i++){
            int ans=min(h[l],h[e])*(e-l);
            maxi=max(maxi,ans);
            if(h[l]>h[e]) e--;
            else l++;
        }
        return maxi;
    }
};
