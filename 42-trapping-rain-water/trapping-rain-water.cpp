class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        int max=INT_MIN;
        for(int i=0;i<height.size();i++){
            if(height[i]>max){
                max=height[i];
            }
            left[i]=max;
            cout<<"left"<<i<<" "<<left[i]<<endl;
        } 
        max=INT_MIN;
        for(int i=height.size()-1;i>0;i--){
            if(height[i]>max){
                max=height[i];
            }
            right[i]=max;
            cout<<"right"<<i<<right[i]<<endl;
        }
        int unit=0;
        for(int i=0;i<height.size();i++){
            if(height[i]<min(left[i],right[i]))
            unit+= min(left[i],right[i])-height[i];
        }
        return unit;
    }
};