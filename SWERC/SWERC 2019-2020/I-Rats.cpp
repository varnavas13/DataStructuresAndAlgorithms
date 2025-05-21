#include<bits/stdc++.h>
using namespace std;
typedef long long ld;
int main()
{
    ld a1,a2,a3,n;
    cin>>a1>>a2>>a3;
    ++a1;
    ++a2;
    ++a3;
    n=a1*a2/a3;
    --n;
   cout<<n;
}