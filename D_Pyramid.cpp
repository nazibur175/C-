#include<cstdio>
using namespace std;
int n,a[200005],l[200005],r[200005],ans;
int min(int x,int y)
{
	if(x<y) return x;
	else return y;
}
int max(int x,int y)
{
	if(x>y) return x;
	else return y;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for(int i=1;i<=n;i++)
		l[i]=min(a[i],l[i-1]+1);

	for(int i=n;i>=1;i--)
		r[i]=min(a[i],r[i+1]+1);
        
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,min(l[i],r[i]));
	}
	printf("%d",ans);
	return 0;
}