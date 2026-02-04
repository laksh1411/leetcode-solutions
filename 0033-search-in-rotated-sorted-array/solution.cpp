class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int st=0,e=n-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(arr[st]<=arr[mid]){
                if(target>=arr[st] && arr[mid]>target){
                    e=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(target<=arr[e] && arr[mid]<target){
                    st=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};
