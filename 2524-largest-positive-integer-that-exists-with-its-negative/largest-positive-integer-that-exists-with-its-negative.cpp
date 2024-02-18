class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        for(int k=0;k<nums.size();k++){
            if(-nums[i]==nums[j]) return nums[j];
            else if(-nums[i] > nums[j]) i++;
            else j--;
        }
        return -1;
    }
};