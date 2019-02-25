#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Bank
{
	int depo;
	int bal=0;
	char ac_tp[20];
	public:
	int ac_no;
	char name[30];
	void assign()
	{
		cin>>bal;
	}
	void deposit(int amt)
	{
		bal+=amt;
	}
	void withdraw(int amt)
	{
		if(bal-amt<0)
			cout<<"\n Insufficient balance!!!";
		else
		{	
			bal=bal-amt;
		}
	}
	void display()
	{
		cout<<"\nName:"<<name;
		cout<<"\nCurrent balance:\n"<<bal;	
	}
};
int main()
{
	
	int n,i,c=1,a,ch,l,j=0;
	char name[30];
	cout<<"\n\n\n\t\t\t---------------------BANK REGISTRY---------------------\t\t\t\n\n\n";
	cout<<"How many accounts?";
	cin>>n;
	Bank s[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter account number:";
		cin>>s[i].ac_no;
		cout<<"Enter Name of account_holder:";
		cin>>s[i].name;
	}
	while(j==0)
	{
	
	if(c==1)
	{
		cout<<"\nEnter account number:";
		cin>>a;
		for(i=0;i<n;i++)
		{
			if(s[i].ac_no==a)
			{
				cout<<"MENU:1.Desposit 2.Withdraw 3.Display";
				cin>>ch;
				switch(ch)
				{
					case 1:
					{	cout<<"Enter amount:";
						cin>>l;
						s[i].deposit(l);
						break;
					}
					case 2:
					{
						cout<<"Enter amount:";
						cin>>l;
						s[i].withdraw(l);
						break;
					}
					case 3:
					{
						s[i].display();
						break;
					}
					default:{cout<<"Invalid Input";}
				}
				break;
			}
		}
		/*if(c==2)
		{
			cout<<"\nEnter Name:";
			gets(name);
			for(i=0;i<n;i++)
			{
				if(strcmp(s[i].name,name)==0)
				{
					cout<<"\nIs this your account number-";
					cout<<s[i].ac_no;
					cout<<"MENU:1.Desposit 2.Withdraw 3.Display";
					cin>>ch;
					switch(ch)
					{
						case 1:
						{	cout<<"Enter amount:";
							cin>>l;
							s[i].deposit(l);
							break;
						}
						case 2:
						{
							cout<<"Enter amount:";
							cin>>l;
							s[i].withdraw(l);
							break;
						}
						case 3:
						{
							s[i].display();
							break;
						}
						default:{cout<<"Invalid Input";}
					}
					break;
				}
			}
		}*/	
	}
}
}
						
			
	
		
		
		

	
	
		
	
