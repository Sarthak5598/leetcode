class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>result;
        for(int i=0;i<words.size();i++){
            string str="";
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==separator ){
                    if(str!="")
                        result.push_back(str);
                    str="";
                    }
                else if( j==words[i].size()-1 ){
                    str+=words[i][j];
                    result.push_back(str);
                }
                else{
                    str+=words[i][j];
                }
            }
        }
        return result;
    }
};