#include<iostream>
using namespace std;
bool odd(int k)
{
	if(k%2!=0)
	{
		return true;
	}	
	else{
		return false;
	}
}
int main()
{
	int startrange,endrange,i,j;
	cin>>startrange>>endrange;
	for(i=startrange+1;i<endrange;i++)
	{
		int c=odd(i);
		if(c==1)
		{
			cout<<i;
			cout<<endl;
		}
	}
}
