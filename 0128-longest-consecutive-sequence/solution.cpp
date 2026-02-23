class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        vector<int> ans;
        for(auto it:s){
            ans.push_back(it);
        }
        int size=1,maxi=1;
        for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]==1){
                size++;
            }
            else{
                maxi=max(maxi,size);
                size=1;
            }
        }
        maxi=max(maxi,size);
        return maxi;
    }
};
