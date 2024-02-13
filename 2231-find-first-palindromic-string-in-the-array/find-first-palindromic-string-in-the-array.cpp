class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            count=0;
            string str=words[i];
            int n=str.size();
            for(int j=0;j<n/2;j++){
                if(str[j]!=str[n-j-1]){
                    break;
                }
                else{
                    count++;
                }
            }
            if(count==str.size()/2){
                return str;
            }

        }
        return "";
    }
};