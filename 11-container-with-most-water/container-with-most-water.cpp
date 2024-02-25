class Solution {
public:
    int maxArea(vector<int>& height) {
        int head=0,tail=height.size()-1;
        long int max=0;
        while(head<tail){
            int width =min(height[head],height[tail]);
            long int area = width*(tail-head);
            if(area>max){
                max=area;
            }
            if(height[head]<height[tail]){
                head++;
            }
            else{
                tail--;
            }
        }
        return max;
    }
};