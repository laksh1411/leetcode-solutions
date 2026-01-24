class Solution {
public:
    int climbStairs(int n) {
        static vector<int> memo(46,-1);
        if(n<=2) return n;
        if(memo[n]!=-1) return memo[n];
        memo[n]=climbStairs(n-1)+climbStairs(n-2);
        return memo[n];
    }
};
