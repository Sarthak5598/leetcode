class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        unordered_map<int,int> map;
        stack<int>st;
        for(int i=0;i<nums2.size();i++){
            map[nums2[i]]=-1;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()< nums2[i]){
                    st.pop();
            }
            if(!st.empty()){
                map[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }        
        
        
        for(int i=0;i<nums1.size();i++){
            ans[i]=map[nums1[i]];
        }
        return ans;
    }
};