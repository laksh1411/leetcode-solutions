class Solution {
public:
    bool isalpha(char ch){
        if((ch>='0'&&ch<='9') || tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int a=0,e=n-1;
        while(a<e){
            if(!isalpha(s[a])){
                a++;
                continue;
            }
            if(!isalpha(s[e])){
                e--;
                continue;
            }
            if(tolower(s[a])!=tolower(s[e])){
                return false;
            }
            a++;
            e--;
        }
        return true;
    }
};
