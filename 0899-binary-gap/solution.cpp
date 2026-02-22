class Solution {
public:
    int binaryGap(int n) {
        vector<int> ans;
        while(n>0){
            ans.push_back(n%2);
            n=n/2;
        }
        reverse(ans.begin(),ans.end());
        int maxi=0,count=0,l=-1;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                if(l!=-1)
                maxi=max(maxi,count+1);
                l=i;
                count = 0;
            }
            else if(l != -1){
                count++;
            }
        }
        return maxi;
    }
};
