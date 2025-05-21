#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n;
cin>>n;
while(n--)
{
    long long b,w,bc,wc,z;
    cin>>b>>w>>bc>>wc>>z;
    if(z+bc<wc)
    {
        b+=w;
        cout<<bc*b+z*w<<endl;
    }
    else if(z+wc<bc)
    {
        w+=b;
        cout<<wc*w+z*b<<endl;
    }
    else
    cout<<wc*w+bc*b<<endl;
    }
}
