class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int l=0,r=0,maxlen=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        while(r<n){
            mp[nums[r]]++;
            if(mp.size()>2){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            if(mp.size()<=2){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};
