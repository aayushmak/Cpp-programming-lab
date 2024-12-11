#include<iostream>
using namespace std;
class Person
{
	char n[20],a[20];
	int ag;
	public:
		void inp()
		{
			cout<<"Enter name, age, address"<<endl;
			cin>>n>>ag>>a;
		}
		void display()
		{
			if(ag>18)
			{
			cout<<"Name:"<<n<<"   Age:"<<ag
			<<"   Address:"<<a<<"   VotingId:"<<1001;
			}else{
			cout<<"Name:"<<n<<"   Age:"<<ag
			<<"   Address:"<<a<<"   VotingId:"<<0;
			}
		}
};
int main()
{
	Person obj;
	obj.inp();
	obj.display();
	return 0;
}
