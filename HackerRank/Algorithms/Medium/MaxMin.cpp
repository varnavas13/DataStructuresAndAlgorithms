#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100010];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans=1e9;
    for(int i=k-1;i<n;i++){
        ans=min(arr[i]-arr[i-k+1],ans);
    }
    cout<<ans<<endl;
    return 0;
}
