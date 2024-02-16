class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>right;
        int max =INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(max<arr[i]){
                max=arr[i];
            }
            right.insert(right.begin(),max);
        }
        vector<int>result;
        for(int i=1;i<arr.size();i++){
            result.push_back(right[i]);
        }
        result.push_back(-1);
        return result;
    }
};