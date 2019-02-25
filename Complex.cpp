 #include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
	Complex(): real(0),img(0){}
	void read()
	{
		cout<<"\nEnter the real part:\n";
		cin>>real;
		cout<<"\nEnter the imaginary part:\n";
		cin>>img;
	}
	Complex operator + (Complex c2)
	{
		Complex temp;
		temp.real=real+c2.real;
		temp.img=img+c2.img;
		return temp;
	}
	void display()
	{
		cout<<real<<"+i("<<img<<")\n";
	}
};
int main()
{
	Complex c1,c2,result;
	cout<<"\nFirst complex:\n";
	c1.read();
	cout<<"\nSecond complex:\n";
	c2.read();
	result=c1+c2;
	cout<<"\nComplex sum\n";
	result.display();
}
	
	
