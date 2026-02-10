class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        if(p%10 >= 5){
            p=p-(p%10)+10;
        }
        else if(p%10<5) p=p-(p%10);

        else p=p;

        return 100-p;
    }
};
