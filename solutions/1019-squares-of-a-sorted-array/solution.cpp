class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int> res(n);
        int s=0,e=n-1,pos=n-1;
        while(s<=e){
            if(abs(arr[s])>abs(arr[e])){
                res[pos]=arr[s]*arr[s];
                s++;
            }
            else{
                res[pos]=arr[e]*arr[e];
                e--;
            }
            pos--;
        }
        return res;
    }
};
