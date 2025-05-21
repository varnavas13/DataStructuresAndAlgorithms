#include <bits/stdc++.h>

using namespace std;
int main(){


long  n;
cin>>n;
long long a[n];
for(long long i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
cout<<a[n/2];


}
