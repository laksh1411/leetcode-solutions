class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();int sum=0,left=0,right=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        //cout<<sum;
        for(int i=0;i<n;i++){
            right=sum-left-nums[i];
            if(left==right)return i;
            left+=nums[i];
            cout<<left<<" "<<right<<"\n";
        }
        //if(left==0 || right==0) return 0;
        return -1;
    }
};
