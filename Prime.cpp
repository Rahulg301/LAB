#include<iostream>
using namespace std;
class Prime
{
	public:
	void check(int l,int h)
	{
		int i,flag;
		while(l<h)
		{
			for(i=2;i<=(l/2);i++)
			{
				if(l%i==0)
				{
				 	flag=1;
				 	break;
				}
				else
				{
					flag=0;
				}	
			}	
			if(flag==0)
				{
					cout<<l<<" ";
				}
		l++;
		}			
	}
};
int main()
{
int l,h;
Prime p;
cout<<"Lowerbound:";
cin>>l;
cout<<"Upperbound:";
cin>>h;
p.check(l,h);
cout<<"\n";
return 0;
}
