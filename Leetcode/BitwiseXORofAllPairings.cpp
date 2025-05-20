class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x1=0,x2=0;
        if(nums2.size()%2==1)
        {
            for(int i=0;i<nums1.size();i++)
            x1=(x1^nums1[i]);
        }
        if(nums1.size()%2==1)
        {
            for(int i=0;i<nums2.size();i++)
            x2=(x2^nums2[i]);
        }
        return x1^x2;
    }
};
