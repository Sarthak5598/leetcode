class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str;
        int n=columnNumber;
        while(n>0){
            n--;
            str +='A'+n%26; 
            n=n/26;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};