class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        vector<int>numsnew(2*nums.size());
        stack<int>st;
        for(int i=0;i<2*nums.size();i++){
            numsnew[i]=nums[i%nums.size()];
        }
        for(int i=numsnew.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()<=numsnew[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i%nums.size()]=st.top();
            }
            st.push(numsnew[i]);
        }
        return ans;
    }
};