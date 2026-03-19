class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=0;
        int check=INT_MAX;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                diff=target-sum;
                if(abs(diff)<abs(check)) check=diff;
                if(sum>target) k--;
                else j++;
            }
        } 
        return target-check;
    }
};
