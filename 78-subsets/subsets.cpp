class Solution {
public:
    void sub(vector<int> nums,vector<int>output,vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //exclude
        
        sub(nums,output,ans,i+1);
        
        output.push_back(nums[i]);
        for(auto a:output){
            cout<<"this one"<<a<<endl;
            cout<<endl;
        }
        sub(nums,output,ans,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        int i=0;
        vector<vector<int>> ans;
        sub(nums,output,ans,i);
        return ans;
    }
};