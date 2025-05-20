#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   stack<ll> a,b,c;
   ll n;
   cin>>n;
   for(ll i=n;i>=1;i--)
   {
       a.push(i);
   }
   cout<<(1<<n)-1<<"\n";
   for(ll i=1;i<(1<<n);i++)
   {
       if(n%2==0)
       {
          
           if(i%3==1)
           {
               if(a.empty()||(!a.empty()&&!b.empty()&&a.top()>b.top()))
               {
                   ll x=b.top();
                   b.pop();
                   cout<<"2 1"<<"\n";
                   a.push(x);
               }
               else if(b.empty()||(!a.empty()&&!b.empty()&&a.top()<b.top()))
               {
                   ll x=a.top();
                   a.pop();
                   cout<<"1 2"<<"\n";
                   b.push(x);
               }
           }
           else if(i%3==2)
           {
            if(a.empty()||(!a.empty()&&!c.empty()&&a.top()>c.top()))
               {
                   ll x=c.top();
                   c.pop();
                   cout<<"3 1"<<"\n";
                   a.push(x);
               }
               else if(c.empty()||(!a.empty()&&!c.empty()&&a.top()<c.top()))
               {
                   ll x=a.top();
                   a.pop();
                   cout<<"1 3"<<"\n";
                   c.push(x);
               }   
           }
           else
           {
               if(c.empty()||(!c.empty()&&!b.empty()&&c.top()>b.top()))
               {
                   ll x=b.top();
                   b.pop();
                   cout<<"2 3"<<"\n";
                   c.push(x);
               }
               else if(b.empty()||(!c.empty()&&!b.empty()&&c.top()<b.top()))
               {
                   ll x=c.top();
                   c.pop();
                   cout<<"3 2"<<"\n";
                   b.push(x);
               }
           }
       }
       else
       {
           if(i%3==1)
           {
            if(a.empty()||(!a.empty()&&!c.empty()&&a.top()>c.top()))
               {
                   ll x=c.top();
                   c.pop();
                   cout<<"3 1"<<"\n";
                   a.push(x);
               }
               else if(c.empty()||(!a.empty()&&!c.empty()&&a.top()<c.top()))
               {
                   ll x=a.top();
                   a.pop();
                   cout<<"1 3"<<"\n";
                   c.push(x);
               }      
           }
           else if(i%3==2)
           {
               if(a.empty()||(!a.empty()&&!b.empty()&&a.top()>b.top()))
               {
                   ll x=b.top();
                   b.pop();
                   cout<<"2 1"<<"\n";
                   a.push(x);
               }
               else if(b.empty()||(!a.empty()&&!b.empty()&&a.top()<b.top()))
               {
                   ll x=a.top();
                   a.pop();
                   cout<<"1 2"<<"\n";
                   b.push(x);
               }
           }
           else
           {
               if(c.empty()||(!c.empty()&&!b.empty()&&c.top()>b.top()))
               {
                   ll x=b.top();
                   b.pop();
                   cout<<"2 3"<<"\n";
                   c.push(x);
               }
               else if(b.empty()||(!c.empty()&&!b.empty()&&c.top()<b.top()))
               {
                   ll x=c.top();
                   c.pop();
                   cout<<"3 2"<<"\n";
                   b.push(x);
               }
           }
       }
   }
    return 0;
}