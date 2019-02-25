#include<iostream>
using namespace std;
class Pal
{
	int a,t,d,rev;
	public:
	void palindrome(int a)
	{
		t=a;
		while(a!=0)
		{
			d=a%10;
			rev=rev*10+d;
			a=a/10;
		}
		if(t==rev)
			cout<<"\nPalindrome\n";
		else 
			cout<<"\nNot a palindrome\n";
	}
};
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	Pal p;
	p.palindrome(n);
}
