class Solution {
  public:
    bool canSplit(vector<int>& arr) {
            int sm=0;
            for(int i=0;i<arr.size();++i)
            sm+=arr[i];
            if(sm%2==1)
            return false;
           int sm2=0;
           for(int i=0;i<arr.size();++i)
           {
               sm2+=arr[i];
               if(sm2*2==sm)
               return true;
           }
           return false;
            
            
    }
};