#include<iostream>
using namespace std;
int factor(int k)
{
	int i,count1=0;
	for(i=1;i<=k;i++)
	{
		if(k%i==0)
		{
			count1++;
		}
	}
	return count1;
}
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int a[n],b[n][2],count=0,i,j,k,k1,max;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		count=factor(a[i]);
		b[i][1]=count;
		b[i][0]=a[i];
	}
	max=b[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][1]>b[j][1])
			{
				k=b[i][1];
				b[i][1]=b[j][1];
				b[j][1]=k;
				k=b[i][0];
				b[i][0]=b[j][0];
				b[j][0]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<b[i][0];
		cout<<endl;
	}
}
