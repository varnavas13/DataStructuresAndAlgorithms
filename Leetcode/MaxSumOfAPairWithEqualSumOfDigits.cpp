class Solution {
public:
    int maximumSum(vector<int>& nums) {
     int arr[9*10][2];
     for(int i=0;i<10*9;i++)
     {
        arr[i][0]=-1;
        arr[i][1]=-1;
        
     }
     for(int i=0;i<nums.size();i++)
     {
        int temp=nums[i];
        int sm=0;
        while(temp>0)
        {
            sm+=temp%10;
            temp/=10;
        }
        if(arr[sm][0]<nums[i])
        {
            arr[sm][1]=arr[sm][0];
            arr[sm][0]=nums[i];
        }
        else if(arr[sm][1]<nums[i])
        {
            arr[sm][1]=nums[i];
        }
     }   
     int mx=-2;
     for(int i=0;i<10*9;i++)
    {
        if(arr[i][1]>0)
         mx=max(mx,(int)(arr[i][0]+arr[i][1]));

    }
     if(mx==-2)
     return -1;
     return mx;
    }
};
