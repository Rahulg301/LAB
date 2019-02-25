//Program to count number of people inside a bank

#include<iostream>
using namespace std;
class Counter
{
	int count;
	public:
	Counter(): count(15){}					//Assuming initially 15 people in the bank
	int getcount()
	{
		cout<<count;
	}
	void operator ++ ()
	{
		++count;
	}
	void operator -- ()
	{
		--count;
	}
};
int main()
{
	cout<<"\nAssuming initially 15 persons in the bank\n";
	int n,i=0,j=0;
	Counter c;
	while(i!=1)
	{	cout<<"\nChoose:A person came into the bank-1 Someone left-2\n";
		cin>>n;
		if(n==1)
			++c;
		else if(n==2)
			--c;
		cout<<"\nDisplay? 1.No 2.Yes\n";
		cin>>j;
		if(j==2)
		{
			c.getcount();
		}
		cout<<"\nContinue? 1:No 2.Yes\n";
		cin>>i;
	}
}
	
	
