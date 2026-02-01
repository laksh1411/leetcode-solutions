class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=nums.size();
        vector<int> ans(s);
        int k=0;
        for(int i=0;i<n;i++){
            ans[k]=nums[i];
            k+=2;
        }
        int p=1;
        for(int i=n;i<s;i++){
            ans[p]=nums[i];
            p+=2;
        }
        return ans;
    }
};
