class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto map:umap){
            if(map.second>n/2){
                return map.first;
            }
        }
        return 0;
    }
};