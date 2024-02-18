class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int head=0,tail=nums.size()-1,count=0;
        while(head<tail){
            int sum= nums[head]+nums[tail];
            if(sum<target){
                count += tail-head;
                head++;
            }
            else{
                 tail--;
            }
        }
        return count;
    }
};