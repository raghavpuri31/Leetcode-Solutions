class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(divisor==0)
            return 0;
       
        
        if(dividend==-2147483648 && divisor==1)
            return -2147483648;
        
        if(dividend==-2147483648 && divisor==-1)
            return 2147483647;
        
       int q,rem;
        
        rem=(dividend % divisor);
       
        int x=dividend-rem;
        
        q=x/divisor;
        
        
       return q;
    
    }
};
