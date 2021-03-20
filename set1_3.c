#include<stdio.h>
void main()
{
	char s[5][5]={"WELCO","METOZ","OHOCO","RPORA","TION"};
	int i,j,k,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((s[i][j]=='T'&&s[i][j+1]=='O'&& s[i][j+2]=='O')||(s[i][j]=='T'&&s[i+1][j]=='O'&& s[i+2][j]=='O'))
			{
				if(s[i][j]=='T'&&s[i][j+1]=='O'&& s[i][j+2]=='O')
				{
					printf("Starting index: %d %d\n",i,j);
					printf("Ending index: %d %d",i,j+2);
				}
				if(s[i][j]=='T'&&s[i+1][j]=='O'&& s[i+2][j]=='O')
				{
					printf("Starting index: %d %d\n",i,j);
					printf("Ending index: %d %d",i+2,j);	
				}
			}
		}
	}
}
