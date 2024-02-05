class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==NULL){
            return true;
        }
        int head1=0,head2=0,count=0;
        while(head2<t.size() && head1<s.size()){
            if(s[head1]==t[head2]){
                head1++;
                head2++;
            }
            else{
                head2++;
            }
        }
        if(head1!=s.size()){
            return false;
        }
        return true;
    }
};