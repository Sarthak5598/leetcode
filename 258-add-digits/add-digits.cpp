class Solution {
public:
    int result(int num,int sum){
        if(num<=0){
            return sum;
        }
        sum +=num%10;
        num=num/10;
        return result(num,sum);
      }
    int addDigits(int num) {
            int sum=0;
            int ans = result(num,sum);
            if(ans>9){
                return addDigits(ans);
            }
            return ans;
        }
};