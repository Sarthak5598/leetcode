class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count=0;
        vector<int>v;
        if(s.size()!=goal.size())
            return false;
        if(s==goal){
            sort(s.begin(),s.end());
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1]){
                return true;
            }
            }
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                v.push_back(i);
            }
            if(v.size()>2){
                return false;
            }
        }
        if(v.size()!=2){
            return false;
        }
        swap(s[v[0]],s[v[1]]);
        if(s==goal)
        return true;
        return false;
    }
};