class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0){
                int j=i+1;
                while(j<n&&nums[j]==0){
                    j++;
                }
                if(j<n){
                swap(nums[i],nums[j]);
                }
            }
        }
    }
};