class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i;
        
        for(i=0;i<A.size();++i)
            A[i]=pow(A[i],2);
        
        sort(A.begin(), A.end()); 
        
        return A;
    }
};
