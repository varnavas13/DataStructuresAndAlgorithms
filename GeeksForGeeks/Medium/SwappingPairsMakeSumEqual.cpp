class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
      sort(a,a+n);
      sort(b,b+m);
      int total1=0,total2=0;
      for(int i=0;i<n;++i)
      total1+=a[i];
      for(int i=0;i<m;++i)
      total2+=b[i];
      unordered_map<int,int>mp1,mp2;
      for(int i=0;i<n;++i)
      mp1[a[i]]++;
      for(int i=0;i<m;++i)
      mp2[b[i]]++;
      if(total1%2!=total2%2)
      return -1;
  
      for(int i=0;i<n;++i)
      {
          int temp=total1-total2;
          temp=temp/2;
        temp-=a[i];
        temp*=-1;
        if(mp2[temp]>0)
        return 1;
          
      }
      return -1;
    }
};