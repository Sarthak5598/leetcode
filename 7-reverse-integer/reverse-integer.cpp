class Solution {
public:
    int reverse(int x) {
        long long int result=0;
        int n=x;
        while(n!=0){
            result *= 10;
            result+=n%10;
            if(result>INT_MAX||result<INT_MIN){
                return 0;
            }
            n=n/10;
        }
        return result;
    }
};