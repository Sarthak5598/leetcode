class Solution {
public:
    void reverse(vector<char>&s,int i,int n){
        if(i>=n-i){
            return ;
        }
        else{
            swap(s[i],s[n-i]);
        }
        reverse(s,++i,n);
    }
    void reverseString(vector<char>& s) {
        int i=0,n=s.size()-1;
        reverse(s,i,n);
    }
};