class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
        }
        int k=n;
        for(int i=0;i<n;i++){
            ans[k++]=nums[i];
        }
        return ans;
    }
};
