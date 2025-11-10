class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        int n= nums.size();
        //int b=0;
        for(int i=0;i<n;i++){
            //c=nums[i];
            if(a.find(nums[i])!=a.end()){
                return nums[i];
            }
            a.insert(nums[i]);
        }
        return -1;
    }
};
