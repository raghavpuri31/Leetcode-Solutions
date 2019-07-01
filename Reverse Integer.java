class Solution {
    public int reverse(int x) {
        
        
      int sign = x >= 0 ? 1 : -1;
        long r=0; 
        if(x<0){
            x=-x;
        }
        while(x>0)
        {
            r= (r*10)+(x%10);
           // long 
            x=x/10; 
        }
        if(r>Integer.MAX_VALUE){
            return 0;
        }else{
            return sign*(int)r;
        }   
    }
}
