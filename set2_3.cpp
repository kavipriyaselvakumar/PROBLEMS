#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	int size=1;
	a[0]=3;
	a[1]=4;
	int i;
	for(i=0;i<n-2;i++)
	{
		a[++size]=(a[i]*10)+3;
		a[++size]=(a[i]*10)+4;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
}
