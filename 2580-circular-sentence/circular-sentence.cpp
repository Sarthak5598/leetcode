class Solution {
public:
    bool isCircularSentence(string sentence) {
        int head=0;
        int head1=1;
        int count=0;
        for(int i=0;i<sentence.size();i++){
            if(sentence[head1]==' '){
                count++;
                if(sentence[head1+1]!=' ' && sentence[head1+1]!=sentence[head]){
                    cout<<"no";
                    return false;
                }
                else{
                    cout<<"yess";
                }
            }
            head++;
            head1++;
        }

        if(sentence[0]!=sentence[sentence.size()-1]){
                return false;
        }
        
        return true;
    }
};