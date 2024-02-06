class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>umap;
        int min=INT_MAX; 
        int result=0;   
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int head=i+1;
            int tail=nums.size()-1;
            while(head<tail){
                int mid =nums[i]+nums[head]+nums[tail];
                
                if(mid==target){
                    return mid;
                }
                else if(abs(mid-target)<abs(min)){
                    min=mid-target;
                    result=mid;
                }
                if(mid<target){
                    head++;
                }
                else{
                    tail--;
                }
            }
        }
        return result;
    }
};