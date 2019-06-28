int removeDuplicates(int* nums, int numsSize){
int i,j,k,c=0;
    for(i=0;i<numsSize;++i)
        for(j=i+1;j<numsSize;++j)
            if(nums[i]==nums[j])
            {
                for(k=j+1;k<numsSize;++k)
                    nums[k-1]=nums[k];
                --j;
                --numsSize;
            }
    
    for(i=0;i<numsSize;++i)
        ++c;
    
    return c;
}
