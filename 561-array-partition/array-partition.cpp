class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size()-1;i=i+2){
            sum +=nums[i]<nums[i+1]?nums[i]:nums[i+1];
            cout<<"first:"<<nums[i]<<"second"<<nums[i+1]<<endl;
        }
        return sum;
    }
};