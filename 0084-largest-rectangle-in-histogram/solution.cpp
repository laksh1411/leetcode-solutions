class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        int n=h.size();
        vector<int> index(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && h[i]<=h[s.top()]){
                s.pop();
            }
            if(s.empty()) index[i]=-1;
            else{
                index[i]=s.top();
            }
            s.push(i);
        }
        stack<int> st;
        vector<int> li(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && h[i]<=h[st.top()]){
                st.pop();
            }
            if(st.empty()) li[i]=n;
            else{
                li[i]=st.top();
            }
            st.push(i);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,h[i]*(li[i]-index[i]-1));
        }
        return maxi;
    }
};
