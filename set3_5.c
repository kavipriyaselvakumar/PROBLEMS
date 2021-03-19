#include<stdio.h>
void main()
{
	int n1,n2,a[100],b[100],c[100],i,j,temp;
	printf("Enter the size of the two array:");
	scanf("%d %d",&n1,&n2);
	printf("Enter the first array element:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the second array element:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n2;i++)
	{
		a[n1]=b[i];
		n1++;
	}
	for(i=0;i<n1;i++)
	{
		c[i]=-1;
	}
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(a[i]==a[j] && c[i]!=0)
			{
				c[j]=0;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		if(c[i]==-1)
		{
		printf("%d",a[i]);
		}
	}
}
