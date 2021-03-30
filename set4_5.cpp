#include<iostream>
using namespace std;
int main()
{
	int amount_of_petrol,no_of_bunks,capacity[100],distance[100],i,j,remaining_petrol;
	cout<<"Enter the amount of petrol in the cars:";
	cin>>amount_of_petrol;
	cout<<"Number of petrol bunks available:";
	cin>>no_of_bunks;
	cout<<"Enter the capacity of each bunks:";
	for(i=0;i<no_of_bunks;i++)
	{
		cin>>capacity[i];
	}
	cout<<"Enter the distance of each bunks:";
	for(i=0;i<no_of_bunks;i++)
	{
		cin>>distance[i];
	}
	for(i=0;i<no_of_bunks;i++)
	{
		amount_of_petrol=amount_of_petrol-distance[i];
		amount_of_petrol=amount_of_petrol+capacity[i];
	}
	cout<<"Remaining petrol:"<<amount_of_petrol;
}
