#include<stdio.h>
void main()
{
	char s[10][2]={"luke", "shaw","wayne","rooney","rooney", "ronaldo","shaw", "rooney"};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",s[i][j]);
		}
	}
}
