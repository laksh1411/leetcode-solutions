class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans.insert(nums[i]);
            // if(ans.size()>k){
            //     ans.erase(ans.begin());
            }
        auto it=ans.begin();
        advance(it,n-k);
        return *it;
    }
};
