class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
       int mx=0;
       for(int i=0;i<a.size();++i)
       mx=max(mx,a[i]);
       return mx;
    }
};
