class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int ele=nums[0];
        for(int i=1;i<n;i++){
            if(ele!=nums[i] && count==1){
                ele=nums[i];
            }
            else if(ele!=nums[i]) count--;
            else count++;
        }
        return ele;
    }
};
