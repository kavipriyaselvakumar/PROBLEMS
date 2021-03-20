#include<stdio.h>
#include<math.h>
void main()
{
	int a[5]={10,36,54,89,12};
	int count,b[5][2],max=0,max1,temp,temp1,k,c[5];
	int n,i,j;
	for(i=0;i<5;i++)
	{
		count=0;
		if(a[i]%4==0 && a[i]%6==0)
		{
			count=count+4;
		}
		if(a[i]%2==0)
		{
			count=count+3;
		}
		n=sqrt(a[i]);
		if(n*n==a[i])
		{
			count=count+5;
		}
		b[i][0]=a[i];
		b[i][1]=count;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(b[i][1]>b[j][1])
			{
				temp=b[i][1];
				b[i][1]=b[j][1];
				b[j][1]=temp;
				temp1=b[i][0];
				b[i][0]=b[j][0];
				b[j][0]=temp1;
			}
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d ",b[i][0]);
		}
		printf("\n");
	}
}
