class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int head=0,tail=nums.size()-1,i=0;
        vector<int>result;
        while(head<=tail){
            if(nums[head]*nums[head]>nums[tail]*nums[tail]){
                //result.push_back(nums[head]*nums[head]);
                result.insert(result.begin(),nums[head]*nums[head]);
                head++;
            }
            else{
                //result.push_back(nums[tail]*nums[tail]);
                result.insert(result.begin(),nums[tail]*nums[tail]);
                tail--;
            }
        }
        //reverse(result.begin(),result.end());
        return result;
    }
};