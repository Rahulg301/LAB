#include<iostream>
#include<string.h>
using namespace std;
class Employee
{	int EMP_CODE;
	char EMP_NAME[30];
	public:
	
	void getdata()
	{
		cout<<"\nEnter Employee code:";
		cin>>EMP_CODE;
		cout<<"\nEnter Employee Name:";
		cin>>EMP_NAME;
	}
	void display()
	{
		cout<<"\nEmployee Code:"<<EMP_CODE;
		cout<<"\nEmployee Name:"<<EMP_NAME;
	}
};
int main()
{
	int n,i;
	cout<<"How many employees?";
	cin>>n;
	Employee e[n];
	for(i=0;i<n;i++)
	{
		e[i].getdata();
	}
	cout<<"\n\n\nDetails:\n";
	for(i=0;i<n;i++)
	 e[i].display();
	cout<<"\n";
}
	
	

