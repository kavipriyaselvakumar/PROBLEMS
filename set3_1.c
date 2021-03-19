#include<stdio.h>
void main()
{
	char s[100];
	int n,i,j,k,k1,k2;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((s[i+1]>=48 && s[i+1]<=57) && (s[i]>=48 && s[i]<=57))
		{
			k1=((s[i]-48)*10)+(s[i+1]-48);
			for(k2=0;k2<k1;k2++)
			{
				printf("%c",s[i-1]);
			}
		}
		else{
			if((s[i]>=48 && s[i]<=57))
			{
				k=s[i]-48;
				for(j=0;j<k;j++)
				{
					printf("%c",s[i-1]);
				}
			}
		}
	}
}
