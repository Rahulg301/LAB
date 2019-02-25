#include<iostream>
#include<math.h>
using namespace std;
class Quad
{
	float root1,root2;
	float a,b,c,d;
	public:
	void eqn(float a,float b,float c)	
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			cout<<"\nReal and different roots\n";
			root1=((-b)+sqrt(d))/(2*a);
			root2=((-b)-sqrt(d))/(2*a);
			cout<<root1<<"\n"<<root2<<"\n";
		}
		if(d==0)
		{
			cout<<"\nReal and same roots\n";
			root2=((-b)-sqrt(d))/(2*a);
			cout<<root2<<"\n";
		}
		if(d<0)
		{
			cout<<"\nImaginary roots\n";
			root1=(-b)/(2*a);
			root2=sqrt(-d)/(2*a);
			cout<<root1<<"+i"<<"("<<root2<<")"<<"\n";
		}
	}
};
int main()
{	int x,y,z;
	cout<<"\nEnter coefficient of x^2:";
	cin>>x;
	cout<<"\nEnter coefficient of x:";
	cin>>y;
	cout<<"\nenter constant:";
	cin>>z;
	Quad c;
	c.eqn(x,y,z);
}
