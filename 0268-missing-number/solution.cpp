class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<int> arr(n+2, 0);
        for(int i=0;i<n;i++){
            arr[nums[i]]=1;
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]==0) ans=i;
        }
        return ans;
    }
};
