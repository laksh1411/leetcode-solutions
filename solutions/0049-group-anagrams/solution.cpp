class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        for(string s:strs){
            string a=s;
            sort(a.begin(),a.end());
            mp[a].push_back(s);
        }
        for(auto &i:mp){
            result.push_back(i.second);
        }
        return result;
    }
};
