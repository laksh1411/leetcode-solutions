class Solution {
public:
    long long calcth(vector<int>& piles, int hours){
        long long th=0;
        for(int p:piles){
            th= th+ ceil(double(p)/double(hours));
        }
        return th;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1;
        int end= *max_element(piles.begin(), piles.end());
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            long th= calcth(piles,mid);
            if(th<=h){
                ans=mid;
                end=mid-1;
            }
            else st=mid+1;
        }
        return ans;
    }
};
