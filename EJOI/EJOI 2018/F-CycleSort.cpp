#include<bits/stdc++.h>
#define Rep(i,a,b) for(register int i=(a);i<=(b);++i)
#define Repe(i,a,b) for(register int i=(a);i>=(b);--i)
#define pb push_back
#define mp make_pair
#define Chkmax(a,b) a=a>b?a:b
#define Chkmin(a,b) a=a<b?a:b
#define mx(a,b) (a>b?a:b)
#define mn(a,b) (a<b?a:b)
typedef unsigned long long uint64;
typedef unsigned int uint32;
typedef long long ll;
using namespace std;
namespace IO
{
    const uint32 Buffsize=1<<15,Output=1<<23;
    static char Ch[Buffsize],*S=Ch,*T=Ch;
    inline char getc()
	{
		return((S==T)&&(T=(S=Ch)+fread(Ch,1,Buffsize,stdin),S==T)?0:*S++);
	}
    static char Out[Output],*nowps=Out;
    inline void flush(){fwrite(Out,1,nowps-Out,stdout);nowps=Out;}
    template<typename T>inline void read(T&x)
	{
		x=0;static char ch;T f=1;
		for(ch=getc();!isdigit(ch);ch=getc())if(ch=='-')f=-1;
		for(;isdigit(ch);ch=getc())x=x*10+(ch^48);
		x*=f;
	}
	template<typename T>inline void write(T x,char ch='\n')
	{
		if(!x)*nowps++='0';
		if(x<0)*nowps++='-',x=-x;
		static uint32 sta[111],tp;
		for(tp=0;x;x/=10)sta[++tp]=x%10;
		for(;tp;*nowps++=sta[tp--]^48);
		*nowps++=ch;
	}
}
using namespace IO;
inline void file()
{
#ifndef ONLINE_JUDGE
	freopen("gen.in","r",stdin);
	freopen("gen.out","w",stdout);
#endif
}
const int MAXN=2e5+7;
static int n,s;
static struct poi
{
	int x,id;
	friend bool operator<(poi a,poi b)
	{return a.x<b.x;}
}a[MAXN];
namespace DSU
{
	static int fa[MAXN];
	inline void cls(){Rep(i,1,n)fa[i]=i;}
	inline int Find(int u)
	{return u==fa[u]?u:fa[u]=Find(fa[u]);}
	void merge(int u,int v)
	{fa[Find(v)]=Find(u);}
}
static int ps[MAXN],nx[MAXN],pr[MAXN];
static int nm[MAXN],tt;
void dfs(int u,int fg=1)
{
	if(fg==1)
	{
		int x=u,sm=0;
		do{++sm;x=nx[x];}while(u^x);
		write(sm);
	}
	else if(!fg)
	{
		int x=u;
		do{++tt;x=nx[x];}while(u^x);
		return;
	}
	int x=u;
	do{write(x,' ');x=nx[x];}while(u^x);
}
inline void init()
{
	read(n);read(s);s-=n;
	DSU::cls();
	Rep(i,1,n)read(a[i].x),a[i].id=nx[i]=i;
}
inline void solve()
{
	sort(a+1,a+n+1);
	Rep(i,1,n)while(a[a[i].id].x==a[i].x
		&&a[i].id^i)swap(a[i],a[a[i].id]);
	Rep(i,1,n)ps[a[i].id]=i;
	static int u;
	Rep(i,1,n)if(nx[i]==i)
	{
		u=i;
		while(1)
		{
			nx[u]=ps[u];
			if(ps[u]==i)break;
			u=ps[u];DSU::merge(u,i);
		}
		if(nx[i]==i)DSU::fa[i]=0,++s;
	}
	for(register int i=1,j;i<=n;i=j+1)
	{
		j=i;
		u=DSU::Find(a[i].id);
		if(!u)continue;
		while(j<n&&a[j+1].x==a[i].x)
		{
			++j;
			if(DSU::Find(a[j].id)==u||!DSU::fa[a[j].id])continue;
			swap(nx[a[i].id],nx[a[j].id]);
			DSU::merge(a[i].id,a[j].id);
		}

	}
	if(s<0)return(void)puts("-1");
	static int tmp;tmp=0;
	Rep(i,1,n)if(DSU::fa[i]==i)nm[++tmp]=i;
	write((s<=1||tmp<=1)?tmp:max(tmp+2-s,2));
	if(s<=1||tmp<=1)Rep(i,1,tmp)dfs(nm[i]),*nowps++='\n';
	else
	{

		u=min(s,tmp);
		Rep(i,1,u)dfs(nm[i],0);
		write(tt);
		Rep(i,1,u)dfs(nm[i],-1);
		*nowps++='\n';
		write(u);
		Repe(i,u,1)write(nm[i],i==1?'\n':' ');
		Rep(i,u+1,tmp)dfs(nm[i]),*nowps++='\n';
	}
	flush();
}
int main()

{
   init();
    solve();
    return 0;

}