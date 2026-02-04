class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int l=0,r=0,minlen=INT_MAX;
        int n=arr.size();
        int sum=0;
        while(r<n){
            sum+=arr[r];
            while(sum>=target){
                minlen=min(minlen,r-l+1);
                sum=sum-arr[l];
                l++;
            }
            r++;
        }
        return (minlen==INT_MAX)?  0: minlen;
    }
};
