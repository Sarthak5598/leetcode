class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result(nums.size());
        bool flag=true;
        int evenIndex=0;
        int oddIndex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                    result[evenIndex]=nums[i];
                    evenIndex+=2;
                }
            else{
                    result[oddIndex]=nums[i];
                    oddIndex+=2;
                }
        }
        return result;
    }
};