class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()<3){
            return *s.rbegin();
        }
        else{
        auto ans=prev(s.end(),3);
        return *ans;
        }
    }
};
