class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }
        int head=i+1,tail=nums.size()-1;
        while(head<tail){
            int mid=nums[i]+nums[head]+nums[tail];
            if(mid==0){
                arr.push_back({nums[head],nums[tail],nums[i]});
                while(head<tail&&nums[tail]==nums[tail-1])tail--;                    
                while(head<tail&&nums[head]==nums[head+1])head++;
                head++;
                tail--;
            }
            else if(mid<0){
                head++;
            }
            else{
                tail--;
            }
        }
        }
        return arr;
    }
};