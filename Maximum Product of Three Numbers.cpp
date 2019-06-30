class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int i,n=nums.size();
        sort(nums.begin(),nums.end());
               
        int x= (nums[n-1]*nums[n-2]*nums[n-3]);
        int y= (nums[0]*nums[1]*nums[n-1]);
if(x>y)
        return x;
    else
        return y;
    }
};
