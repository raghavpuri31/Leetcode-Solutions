class Solution {
public:
    bool judgeCircle(string moves) {
        int i,c=0,r=0,l=0,u=0,d=0;
        
        for(i=0;moves[i]!='\0';++i)
            ++c;
        
        if(c%2!=0)
            return false;
        
         for(i=0;moves[i]!='\0';++i)
             if(moves[i]=='L')
                 ++l;
       else if(moves[i]=='R')
                 ++r;
       else if(moves[i]=='U')
                 ++u;
       else
                 ++d;
        
        if((u==d)&&(l==r))
            return true;
        
        return false;
    }
};
