class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=nums[0];
        int i,y=0,f=0;
        
        for(i=1;i<nums.size();++i)
            if(nums[i]>largest)
            {
                largest=nums[i];
                y=i;
            }  
        
        
        for(i=0;i<nums.size();++i)
        {
            if(i!=y)
            {
               if(largest>=2*nums[i])
                   ++f;
            }
        }
        
        if(f==nums.size()-1)
            return y;
        
        return -1;
    }
};
