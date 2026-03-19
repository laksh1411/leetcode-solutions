class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int r=0,l=0;
        int count=0;
        int pre=0;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
                pre=0;
            }
            
            if(mp.size()==k){
                while(mp[nums[l]]>1){
                    mp[nums[l]]--;
                    l++;
                    pre++;
                }
                count+=(pre+1);
            }
            
            r++;
        }
        return count;
    }
};
