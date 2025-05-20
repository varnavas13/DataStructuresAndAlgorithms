#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   
   ll t;
   cin>>t;
   while(t--)
   {
       ll A,B;
       cin>>A>>B;
        if ((2 * A - B) % 3 || (2 * A - B) < 0 || (2 * B - A) % 3 || (2 * B - A) < 0)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<"\n";
   }
    return 0;
}