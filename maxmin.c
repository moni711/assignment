#include<stdio.h>
#include<math.h>
#define ul unsigned long long
#define ll long long
int main(void)
{
	ll int t,n,i,j,cost;
	scanf("%lld",&t);
	while(t--)
	{
		cost=0;
			scanf("%lld",&n);
			int a[n];
			for(i=0;i<n;i++)
				scanf("%lld",&a[i]);
			j=a[0];
			for(i=0;i<n;i++)
			{
				if(a[i]<j)
					j=a[i];
			}
		printf("%d\n",j*(n-1));
	}
	return 0;
}