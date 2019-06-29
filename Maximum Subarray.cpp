class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max = nums[nums.size() - 1];
	int i=nums.size()-2;
	int omax=nums[nums.size() - 1];
    
	while(i>=0){  
		if(max+nums[i]>nums[i])
        {
			max=max+nums[i];
		}
        else
        {   
			max=nums[i];
		}

		if(max>omax){
			omax=max;
		}

		--i;
	} 
        return omax;
    }
};
