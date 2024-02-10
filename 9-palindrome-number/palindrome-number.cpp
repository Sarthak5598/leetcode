class Solution {
public:
    int reverse(int x, int num) {
        if (x == 0) {
            return num;
        }
        // Check for overflow before multiplication
        if (num > INT_MAX / 10 || num < INT_MIN / 10) {
            return 0; // Return 0 to indicate overflow
        }
        num = num * 10 + x % 10;
        x = x / 10;
        return reverse(x, num);
    }
    
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int reversed = reverse(x, 0);
        return reversed == x;
    }
};
