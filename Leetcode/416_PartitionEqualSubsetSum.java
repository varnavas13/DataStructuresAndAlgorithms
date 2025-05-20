class Solution {
    public boolean canPartition(int[] nums) {
        int sm=0;
        for(int i=0;i<nums.length;i++)
        sm+=nums[i];
        if(sm%2==1)
        return false;
        boolean arr[]=new boolean[sm+1];
        arr[sm]=true;
        arr[0]=true;
       for(int i=0;i<nums.length;i++)
       {
        for(int k=sm;k>=0;k--)
        {
            if(k-nums[i]>=0&&arr[k-nums[i]]==true)
            arr[k]=true;
        }
       }
        return arr[sm/2];
    }
}
