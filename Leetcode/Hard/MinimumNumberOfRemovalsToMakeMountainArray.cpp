class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int lisfront[nums.size()+1],lisback[nums.size()+1];
        for(int i=0;i<nums.size()+1;i++)
        {
            lisfront[i]=1;
            lisback[i]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            for(int k=i+1;k<nums.size();k++)
            {
                if(nums[k]>nums[i])
                {
                    lisfront[k]=max(lisfront[k],lisfront[i]+1);
             
                }
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int k=i-1;k>=0;k--)
            {
                if(nums[k]>nums[i])
                lisback[k]=max(lisback[k],lisback[i]+1);
             
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(lisfront[i]>1&&lisback[i]>1)
            ans=min(ans,(int)(nums.size()-lisfront[i]-lisback[i]+1));
        }
    return ans;
    }
};