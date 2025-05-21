#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    string a;
    cin>>a;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            if(a[i]+k%26<='z')
            cout<<(char)(a[i]+k%26);
            else {
            int temp=abs('z'-(a[i]+k%26));
            cout<<(char)(96+temp);
            }
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            if(a[i]+k%26<='Z')
            cout<<(char)(a[i]+k%26);
            else {
            int temp=abs('Z'-(a[i]+k%26));
            cout<<(char)(64+temp);
            }
        }
        else {
        cout<<a[i];
        }
    }
}
