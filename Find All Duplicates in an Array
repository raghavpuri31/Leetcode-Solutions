class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,k=0;
        
        if(nums.empty())return nums;
        
        sort(nums.begin(), nums.end());
        
        for(i=0;i<nums.size()-1;++i)
            if(nums[i]==nums[i+1])
            {
                nums[k]=nums[i];
                ++k;
                continue;
            }
        
nums.resize(k);
        
        return nums;
    }
};
