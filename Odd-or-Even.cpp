#include<iostream>
using namespace std;
class Oore
{
	int a;
	public:
	void ore(int a)
	{
		if(a%2==0)
			cout<<"\nEven Number\n";
		else
			cout<<"\nOdd Number\n";
	}
};
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	Oore c;
	c.ore(n);
}
