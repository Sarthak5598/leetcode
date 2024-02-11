class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>set;
        int result;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        for(int i=0;i<=nums.size();i++){
            if(set.find(i)!=set.end()){
                continue;
            }
            else{
                result=i;
            }
        }
        return result;
    }
};