class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
  sort(nums.begin(), nums.end()); 
        
        int i;
        int n=nums.size()-1;
        
        for(i=0;i<n;++i)
                if(nums[i]==nums[i+1])
                    return true;
    
        
        return false;
        
    }
};
