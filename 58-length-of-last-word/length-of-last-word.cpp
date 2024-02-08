class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int num=0;
        cout<<n;
        while(n>=0 && s[n] == ' '){
            n--;
        }
        if(n==-1){
            return 0;
        }
        for(int i=n;i>=0;i--){
            if(s[i]==' '){
                return num;
            }
            num++;
        }
        return num;
    }
};