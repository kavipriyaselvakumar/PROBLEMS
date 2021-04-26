#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[10]={1, 2, 3, 4, 5, 6, 7};
	int i,j,k=0,l=6;
	while(1)
	{
		if(k==l)
		{
			break;
		}
		else{
			cout<<a[l]<<" "<<a[k]<<" ";
			k++;
			l--;
		}
	}
}
