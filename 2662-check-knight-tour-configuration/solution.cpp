class Solution {
public:
    bool check(vector<vector<int>>& grid,int row,int col,int n,int exp){
        if(row<0 || col<0 || row>=n || col>=n || grid[row][col]!=exp) return false;
        if(exp==n*n-1) return true;

        int ans1=check(grid,row+2,col+1,n,exp+1);
        int ans2=check(grid,row+2,col-1,n,exp+1);
        int ans3=check(grid,row+1,col-2,n,exp+1);
        int ans4=check(grid,row+1,col+2,n,exp+1);
        int ans5=check(grid,row-1,col-2,n,exp+1);
        int ans6=check(grid,row-1,col+2,n,exp+1);
        int ans7=check(grid,row-2,col-1,n,exp+1);
        int ans8=check(grid,row-2,col+1,n,exp+1);

        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return check(grid,0,0,grid.size(),0);
    }
};
