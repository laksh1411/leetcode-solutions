class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(mp.find(ch)==mp.end()){
                mp[ch]={i,1};
            }
            else mp[ch][1]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]][1]==1){
                return mp[s[i]][0];
            }
        }
        return -1;
    }
};
