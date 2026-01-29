class Solution {
public:
    bool issafe(vector<string>& board,int rows,int cols,int n){
        for(int j=0;j<n;j++){
            if(board[rows][j]=='Q') return false;
        }
        for(int j=0;j<n;j++){
            if(board[j][cols]=='Q') return false;
        }
        for(int i=rows,j=cols;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        for(int i=rows,j=cols;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }
    void nqueen(vector<string>& board,int rows,int n,vector<vector<string>>& ans){
        if(rows==n){
            ans.push_back({board});
            return;
        }
        for(int j=0;j<n;j++){
            if(issafe(board,rows,j,n)){
                board[rows][j]='Q';
                nqueen(board,rows+1,n,ans);
                board[rows][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nqueen(board,0,n,ans);
        return ans;
    }
};
