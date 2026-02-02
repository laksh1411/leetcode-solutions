class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++) sum+=nums[i];
        
        int win=0;
        for(int i=0;i<n-k;i++){
            win+=nums[i];
        }
        int minwin=win;
        for(int i=n-k;i<n;i++){
            win=win+nums[i]-nums[i-(n-k)];
            minwin=min(win,minwin);
        }
        return sum-minwin;
    }
};
