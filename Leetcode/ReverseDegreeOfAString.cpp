class Solution {
public:
    int reverseDegree(string s) {
      int x='z';
      x++;
        int sm=0;
        for(int i=0;i<s.size();i++)
        {
            sm+=((x-s[i])*(i+1));
        }  
        return sm;
    }
};
