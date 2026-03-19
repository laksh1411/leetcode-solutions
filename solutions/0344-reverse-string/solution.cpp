class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int a=0,e=n-1;
        while(a<e){
            swap(s[a++],s[e--]);
        }
    }
};
