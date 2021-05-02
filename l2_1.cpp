#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int k=0,l=0,i,j,r,c;
	char a[m][n];
	char x='x';
	r=m;
	c=n;
	while(k<m && l<n)
	{
		for(i=l;i<n;i++)
		{
			a[k][i]=x;
		}
		k++;
		for(i=k;i<m;i++)
		{
			a[i][n-1]=x;
		}
		n--;
		if(k<m)
		{
			for(i=n-1;i>=l;i--)
			{
				a[m-1][i]=x;
			}
			m--;
		}
		if(l<n)
		{
			for(i=m-1;i>=k;i--)
			{
				a[i][l]=x;
			}
			l++;
		}
		x=(x=='o')?'x':'o';
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
