#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
   int n;
   cin>>n;
   int a[n];
   cin>>a[0];
   int mx=a[0],mn=a[0],cntmx=0,cntmn=0;
   for(int i=1;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>mx)
       {
           mx=a[i];
           cntmx++;
       }
       if(a[i]<mn)
       {
           cntmn++;
           mn=a[i];
       }
   }
   cout<<cntmx<<' '<<cntmn;
}
