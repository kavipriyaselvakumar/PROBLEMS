#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int n1,n2,i,j,k,count=0,m;
	printf("Enter the string");
	gets(str1);
	gets(str2);
	n1=strlen(str1);
	n2=strlen(str2);
	for(i=0;i<n1;i++)
	{
		if(str1[i]==str2[0])
		{
			k=i;
			m=i;
			count=1;
			for(j=1;j<n2;j++)
			{
				k++;
				if(str1[k]==str2[j])
				{
					count++;
				}
			}
		}
	}
	if(count==n2)
	{
		printf("%d",m);
	}
	else{
		printf("-1");
	}
}
