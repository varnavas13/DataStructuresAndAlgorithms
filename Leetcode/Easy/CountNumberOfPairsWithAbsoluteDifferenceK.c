int countKDifference(int* nums, int numsSize, int j) {
    int ans=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int k=i+1;k<numsSize;k++)
        {
            int temp=nums[i]-nums[k];
            
            if(temp<0)
            temp=temp*(-1);
            if(temp==j)
            {ans++;}
        }
    }
    return ans;
}