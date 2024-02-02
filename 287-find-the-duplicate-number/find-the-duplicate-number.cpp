class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int result=0;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it=umap.begin();it!=umap.end();++it){
            if(it->second>=2){
                result=it->first;
            }
        }
        return result;
    }
};