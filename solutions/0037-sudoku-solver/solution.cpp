class Solution {
public:
    bool isvalid(vector<vector<char>>& board,int row,int col,int digit){
        for(int i=0;i<9;i++){
            if(board[i][col]==digit) return false;
        }
        for(int i=0;i<9;i++){
            if(board[row][i]==digit) return false;
        }
        int srow=(row/3)*3;
        int scol=(col/3)*3;

        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(board[i][j]==digit) return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board,int row,int col){
        if(row==9) return true;
        if(col==9) return solve(board,row+1,0);
        if(board[row][col]!='.') return solve(board ,row,col+1);
        for(char i='1';i<='9';i++){
            if(isvalid(board,row,col,i)){
                board[row][col]=i;
                bool res=solve(board,row,col+1);
                if(res) return true;
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
