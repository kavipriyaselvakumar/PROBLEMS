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
//alternate solution
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j,a[n];
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    int i=0,mid=n/2,k=n-1;
    sort(a,a+n);
    while(i<mid)
    {
        cout<<a[k];
        cout<<a[i];
        i++;
        k--;

    }
}
