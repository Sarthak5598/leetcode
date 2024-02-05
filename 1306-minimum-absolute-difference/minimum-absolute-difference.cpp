class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());
        int min=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            if( min >abs(arr[i]-arr[i+1])){
                min=abs(arr[i]-arr[i+1]);
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==min){
                result.push_back({arr[i],arr[i+1]});
            }
        }
        return result;
    }
};