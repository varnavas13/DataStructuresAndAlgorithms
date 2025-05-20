class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     int sm=0;
     for(int i=0;i<nums.size();i++)
     sm+=nums[i];
     return sm%k;   
    }
};
