class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int c = 0,i,j,n=nums.size();
        
        for ( i = 0; i < n; ++i) 
        {
            int sum=0;
            
            for ( j = i; j < n; ++j)
            {
                sum=sum+nums[j];
                if (sum == k)
                    ++c;
            }
        }
        return c;
        
    }
};
