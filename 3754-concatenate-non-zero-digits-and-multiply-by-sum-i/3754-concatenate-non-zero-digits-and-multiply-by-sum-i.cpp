class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        int p=1;
        int sum=0;
        while(n>0){
            int digit= n%10;

            if(digit!=0){
                x += (long long)digit * p;
                p*=10;
                sum+= digit;
            }
            n/=10;
        }
        return x* sum;
    }
};