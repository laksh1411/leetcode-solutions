class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dummy(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            dummy[i][n-1]=1;
        }
        for(int i=0;i<n;i++){
            dummy[m-1][i]=1;
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dummy[i][j]=dummy[i+1][j]+dummy[i][j+1];
            }
        }
        return dummy[0][0];
    }
};
