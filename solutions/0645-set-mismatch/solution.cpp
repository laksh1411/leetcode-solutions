class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);

        for(int i:nums){
            freq[i]++;
        }
        int dup,mis;
        for(int i=1;i<n+1;i++){
            if(freq[i]==2)dup=i;
            if(freq[i]==0)mis=i;
        }
        return {dup,mis};
    }
};
