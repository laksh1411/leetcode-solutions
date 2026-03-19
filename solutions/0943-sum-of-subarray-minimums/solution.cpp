class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int mod=1e9+7;
        int n=arr.size();
        stack<int>st1,st2;
        vector<int>prev(n,-1),next(n,n);
        for(int i = 0; i < n; i++) {
            while(!st1.empty() && arr[st1.top()] >= arr[i])
                st1.pop();

            prev[i] = st1.empty() ? -1 : st1.top();
            st1.push(i);
        }
        for(int i = n-1; i >=0 ; i--) {
            while(!st2.empty() && arr[st2.top()] > arr[i])
                st2.pop();

            next[i] = st2.empty() ? n : st2.top();
            st2.push(i);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long l=i-prev[i];
            long r=next[i]-i;
            ans=(ans+arr[i]*l*r)%mod;
        }
        return ans;
    }
};
