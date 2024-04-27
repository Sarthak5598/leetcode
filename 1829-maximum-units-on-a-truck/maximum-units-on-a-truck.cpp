class Solution {
public:
    static bool sort(const vector<int>& v1, const vector<int>& v2){
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        std::sort(boxTypes.begin(),boxTypes.end(),sort);
        int units=0,i=0;
        while(truckSize!=0 && i < boxTypes.size()){
            if(truckSize >= boxTypes[i][0]){
                truckSize-=boxTypes[i][0];
                units +=boxTypes[i][0]*boxTypes[i][1];
                i++;
            }
            else{
                units += truckSize*boxTypes[i][1];
                truckSize=0;
            }
        }
        return units;
    }
};