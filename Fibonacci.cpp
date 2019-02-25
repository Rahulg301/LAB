#include<iostream>
using namespace std;
class Fibo
{
	int a=0,b=1,i,c,n;
	public:
	void fib(int n)
		
	{	
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				cout<<a;
				continue;
			}
			if(i==1)
			{
				cout<<b;
				continue;
			}
			c=a+b;
			a=b;
			b=c;
			cout<<c;
		}
			

	}
};
int main()
{	int n;
	cout<<"\nEnter limit";
	cin>>n;
	Fibo c;
	c.fib(n);
}
