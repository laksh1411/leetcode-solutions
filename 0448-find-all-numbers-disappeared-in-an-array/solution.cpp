class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n+1,0);
        vector<int> ans2;
        for(int i:nums){
            ans[i]++;
        }
        for(int i=1;i<n+1;i++){
            if(ans[i]==0)ans2.push_back(i);
        }
        return ans2;
    }
};
