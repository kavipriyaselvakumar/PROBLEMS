#include<stdio.h>
void main()
{
	char str[100]="1",a[100];
	int i,j,n,count,k,itr;
	scanf("%d",&n);
	printf("%s\n",str);
	for(itr=0;itr<n;itr++)
	{
		count=0;
		k=0;
		for(i=0,j=0;j<str[j]!=NULL;j++)
		{
			if(str[i]==str[j])
				count++;
			else
			{
				a[k++]=count+48;
				a[k++]=str[i];
				i=j;
				count=1;
			}
		}
		a[k++]=count+48;
		a[k++]=str[i];
		a[k]=NULL;
		printf("%s\n",a);
		strcpy(str,a);
	}
}
