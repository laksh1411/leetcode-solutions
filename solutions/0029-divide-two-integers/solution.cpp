class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long long a=dividend/divisor;
        if(a >INT_MAX ) return INT_MAX;
        if(a <INT_MIN) return INT_MIN;
        return dividend/divisor;
    }
};
