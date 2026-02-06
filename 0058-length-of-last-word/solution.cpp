class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0;
        bool flag=0;

        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                l++;
                flag=true;
            }
            else if(flag) break;
        }
        return l;
    }
};
