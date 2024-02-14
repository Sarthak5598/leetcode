class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int &a1,int &a2){
            return a1>a2;
        });
        int mul = 1;
        int mul2=1;
        int n=nums.size();
        cout<<n;
        for(int i=0;i<3;i++){
            mul *=nums[i];
        }
        mul2=nums[n-1]*nums[n-2]*nums[0];
        return mul>mul2?mul:mul2;
    }
};