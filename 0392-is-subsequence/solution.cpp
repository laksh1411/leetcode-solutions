class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(s[k]==t[i]) k++;
            //if(k==s.size()) return true;
        }
        return k==s.size();
        //return false;
    }
};
