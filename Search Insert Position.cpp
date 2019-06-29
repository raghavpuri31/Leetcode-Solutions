class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        
        for(i=0;i<nums.size();++i)
        { 
            if(nums[i]==target)
                return i;
        else
        {
            for(i=0;i<nums.size();++i)
                if(nums[i]<target)
                    continue;
                else
                    return i;
        }
        }
        return i-1;
    }
};
