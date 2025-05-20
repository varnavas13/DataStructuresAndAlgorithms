class Solution {
    public int add(int n1, int  n2, int[] arr){
        int res=0;
        for(int i=n1;i<=n2;i++){
            res += arr[i];
        }
        return res;
    }
    public int maxAscendingSum(int[] nums) {
        int n = nums.length;
        int low=0,high=0;
        int res = 0;
        for(int i=0;i<n;i++){
            
            if((i<n-1) && nums[i]<nums[i+1] ){
                
                high++;
               
            }
            else if((i<n-1) && nums[i]>=nums[i+1]){
                 res = Math.max(res,add(low,high,nums));
                 high++;
                low=high;
            }
          
        }
         res = Math.max(res,add(low,high,nums));
        return res;
    }
}
