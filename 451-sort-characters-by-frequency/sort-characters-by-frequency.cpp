class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>umap;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        vector<int>keys;
        for(const auto& pair:umap){
            keys.push_back(pair.first);
        }
        sort(keys.begin(),keys.end(),[&](char a, char b) {
            return umap[a] > umap[b];
        });
        string result="";
        for(char k:keys){
            result.append(umap[k],k);
        }
        return result;
    }
};