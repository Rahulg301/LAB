#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	int Emp_no,basic;
	char Emp_Name[30];
	float da,it,net,gross;
	public:
		void read()
		{
			cout<<"\nEnter Employee number:";
			cin>>Emp_no;
			getchar();
			cout<<"\nEnter Employee name:";
			cin.getline(Emp_Name,20);
			cout<<"\nEnter base of salary:";
			cin>>basic;
		}
		void nets()
		{
			da=(52*basic)/100;
			gross=basic+da;
			it=(30*basic)/100;
			net=gross-it;
		}
		void display()
		{
			cout<<"\nEmployee_Number:"<<Emp_no;
			cout<<"\nEmployee_Name:"<<Emp_Name;
			cout<<"\nNet_salary:"<<net;
		}
};
int main()
{
	int n,i;
	Employee E[20];
	cout<<"\nEnter number of employees:";
	cin>>n;
	for(i=0;i<n;i++)
		E[i].read();
	/*for(i=0;i<n;i++)
		cout<<"\nEmployee details are:";*/
	for(i=0;i<n;i++)
	{
			E[i].nets();
			E[i].display();
	}
	return 0;
}	
			
	
