class Solution {
public:
    int reverse(int x) {
        long long p=0;
        int positive=1;
        if(x<0){
            if (x == INT_MIN) return 0;
            x= -x;
            positive=-1;
        }
        while(x>0){
            p=p*10+x%10;
            x=x/10;

            if (p > INT_MAX) {
                return 0;
            }
        }
        

        return p*positive;
    }
};