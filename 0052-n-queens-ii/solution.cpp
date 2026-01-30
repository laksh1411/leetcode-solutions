class Solution {
public:
int count=0;
    bool issafe(vector<string>& board,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q') return false;
        }
        for(int i=row, j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        for(int i=row, j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }
    void solve(int row,vector<string>& board,int n){
        if(row==n){
            count++;
            return;
        }
        for(int i=0;i<n;i++){
            if(issafe(board,row,i,n)){
                board[row][i]='Q';
                solve(row+1,board,n);
                board[row][i]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(0, board, n);
        return count;
    }
};
