class Solution {
public:
    int fib(int N) {
        int f1=0,f2=1,i=0,f3;
        
        if(N==0)
        return 0;
        
        while(i<=N-2)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            ++i;
        }
        return f3;
    }
};
