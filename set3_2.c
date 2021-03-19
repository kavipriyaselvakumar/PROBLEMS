#include<stdio.h>
void main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i=i+2)
	{
		for(j=1;j<=n;j=j+2)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=2;i<=n;i=i+2)
	{
		for(j=2;j<=n;j=j+2)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
