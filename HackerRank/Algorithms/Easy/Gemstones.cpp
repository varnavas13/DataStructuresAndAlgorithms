#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(char i='a';i<='z';i++)
    {
        for(int k=0;k<n;k++)
        {
            bool b=false;
         for(int z=0;z<a[k].size();z++)
         {
             if(a[k][z]==i)
             b=true;
         }   
         if(b==false)
            k=n;
        else{
            if(k==n-1)
            cnt++;
        }
        }
    }
    cout<<cnt;
}
