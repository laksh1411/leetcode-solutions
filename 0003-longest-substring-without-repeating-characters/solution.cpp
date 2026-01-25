class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> arr(256,0);
            int count=0;
            for(int j=i;j<n;j++){
                if(arr[s[j]]==1) break;
                arr[s[j]]=1;
                count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
