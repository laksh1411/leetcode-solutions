class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>s;
        int n=grid.size();
        vector<int>ans;
        int a=0,b=0;
        int as=0,ts=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                as+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        ts=n*n*(n*n+1)/2;
        b=ts+a-as;
        ans.push_back(b);
        return ans;
    }
};
