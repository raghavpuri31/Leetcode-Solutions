class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0,j,n=height.size(),area=0;
        
       j=n-1;
             
        while(i<j)
        {
            area=max(area, (min(height[i], height[j])*(j-i)));
            
            if(height[i]<height[j])
                ++i;
            else
                --j;
        }
        
    return area;
        
    }
                         
};
