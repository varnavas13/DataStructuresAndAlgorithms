class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return sumLess(nums,upper)-sumLess(nums,lower-1);
    }
    long sumLess(vector<int>nums,int x)
    {
        long temp=0;int r;
        for(int l=0, r=nums.size()-1;l<=r;l++)
        {
            while(r>l&&nums[l]+nums[r]>x)
            r--;
            temp+=r-l;
        }
         return temp;
    }
   
};
