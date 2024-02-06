class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>result;
    sort(nums.begin(),nums.end());
    if(nums.size()<4)return result;
    for(int i=0;i<nums.size()-1;i++){
        if(i>0&&nums[i]==nums[i-1])
        continue;
        for(int j=i+1;j<nums.size();j++){
            if(j>i+1&&nums[j]==nums[j-1])
        continue;
            int head=j+1;
            int tail=nums.size()-1;
            while(head<tail){
                long long sum=nums[i]+nums[j];
                sum+=nums[head];
                sum+=nums[tail];
                if(sum==target){
                    result.push_back({nums[i],nums[j],nums[head],nums[tail]});
                    head++;
                    tail--;
                    while(head < tail && nums[head] == nums[head-1]) head++;
                    while(head < tail && nums[tail] == nums[tail+1]) tail--;
                }
                else if(sum>target){
                    tail--;
                }
                else{
                    head++;
                }
            }
        }
    }
    return result;    
    }
};