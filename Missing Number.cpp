class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        
        int i,x=0;
        
        for(i=0;i<nums.size();++i)
            x^=nums[i];
        
        for(i=0; i<=nums.size(); i++){
            x^=i;
        }
        
        return x;
    }
};
