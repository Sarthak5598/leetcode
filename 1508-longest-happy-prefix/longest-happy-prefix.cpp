class Solution {
public:
    string longestPrefix(string s) {
        int i=0,j=0;
        int N=s.size();
        int lps[N];
        lps[0]=0;
        i++;
        while(i<N){
            if(s[i]==s[j]){
                j++;
                lps[i]=j;
                i++;
            }
            else{
                if(j==0){
                    lps[i]=0;
                    i++;
                }
                else{
                    j=lps[j-1];
                }
            }
        }
        string str = s.substr(0,j);
        return str;
    }
};