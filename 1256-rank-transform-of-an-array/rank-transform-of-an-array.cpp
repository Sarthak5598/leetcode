class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>umap;
        set<int>s;
        vector<int>result;
        int count=1;
        for(auto &itr:arr) s.insert(itr);
        for(auto itr =s.begin();itr!=s.end();itr++){
            umap[*itr]=count;
            count++;
        }
        for(int i=0;i<arr.size();i++){
            result.push_back(umap[arr[i]]);
        }
        return result;
    }
};