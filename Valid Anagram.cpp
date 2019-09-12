#include <algorithm> 
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int i,j,c=0,v=0;
        
        for(i=0;s[i]!='\0';++i)
            ++c;
        
        for(j=0;t[j]!='\0';++j)
            ++v;
        
        if(c!=v)
            return 0;
        
        std::sort(s.begin(), s.end());
        
        std::sort(t.begin(), t.end());
        
        if(s!=t)
            return 0;
        
        return 1;
    }
};
