class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int m=arr.size();
        int n=arr[0].size();

        int top=0,left=0,bottom=m-1,right=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(arr[top][i]);
            }
            for(int i=top+1;i<=bottom;i++){
                ans.push_back(arr[i][right]);
            }
            for(int i=right-1;i>=left;i--){
                if(top==bottom) break; //very imp edge case for oddsized matrix
                ans.push_back(arr[bottom][i]);
            }
            for(int i=bottom-1;i>=top+1;i--){
                if(right==left) break; //very imp edge case for oddsized matrix
                ans.push_back(arr[i][left]);
            }
            top++,left++,right--,bottom--;
        }
        return ans;
    }
};
