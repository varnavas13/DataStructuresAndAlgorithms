#include<bits/stdc++.h>
#define N 20
using namespace std;
unsigned long long oriz(int a[][N],int i,int x)
{
    return a[i][x]*a[i][x+1]*a[i][x+2]*a[i][x+3];
}
unsigned long long kath(int a[][N],int i,int x)
{
    return a[i][x]*a[i+1][x]*a[i+2][x]*a[i+3][x];
}
unsigned long long diag1(int a[][N],int i,int x)
{
    return a[i+1][x+1]*a[i][x]*a[i+2][x+2]*a[i+3][x+3];
}
unsigned long long diag2(int a[][N],int i,int x)
{
    return a[i][x]*a[i+1][x-1]*a[i+2][x-2]*a[i+3][x-3];
}
int main(){
    unsigned long long mx=0,num;
    int a[N][N];
    for(int i=0;i<N;i++)
    {
        for(int k=0;k<N;k++)
        cin>>a[i][k];
    }
    for(int i=0;i<N;i++)
    {
        for(int k=0;k<N;k++)
        {
            if(k+3<N)
            num=oriz(a,i,k);
            if(num>mx)
            mx=num;
            if(i+3<N)
            num=kath(a,i,k);
            if(num>mx)
            mx=num;
            if(i+3<N && k+3<N)
            num=diag1(a,i,k);
            if(num>mx)
            mx=num;
            if(i+3<N&&k-3>=0)
            num=diag2(a,i,k);
            if(num>mx)
            mx=num;
        }
    }
    cout<<mx;
    
}
