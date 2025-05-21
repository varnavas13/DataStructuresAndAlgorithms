  #include<algorithm>
    #include<cstdlib>
    #include<iostream>
    #include<stdio.h>
    #include<map>
    #include<ext/hash_map>
    #include<ext/hash_set>
    #include<set>
    #include<string>
    #include<vector>
    #include<time.h>
    #include<queue>
    #include<deque>
    #include<sstream>
    #include<stack>
    #include<sstream>
    #include <string.h>
    #define INF 1001001001
    #define MA(a,b) ((a)>(b)?(a):(b))
    #define MI(a,b) ((a)<(b)?(a):(b))
    #define AB(a) (-(a)<(a)?(a):-(a))
    #define P 1000000007ll
    #define X first
    #define Y second
    #define mp make_pair
    #define pb push_back
    #define pob pop_back
    #define E 0.000000001
    #define Pi 3.1415926535897932384626433832795
    using namespace std;
    using namespace __gnu_cxx;
    const int NN=4100001;
    int A,n,m,i,k,j,p,a[NN],b[NN],c[NN];
    int main()
    {
        cin>>n>>m;
        for (i=0;i<n;i++) scanf("%d",&a[i]);
        for (j=1;j<=m;j++)
        {
            int l,r;
            cin>>l>>r;
            k=3;
            for (i=l;i<=r;i++) k=MI(k,a[i]);
            cout<<k<<endl;
        }

        return 0;
    }
