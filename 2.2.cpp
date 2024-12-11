#include<iostream>
using namespace std;
class GCES;
class PEC
{
	int n;
	public:
		void getval()
		{
			cout<<"Enter no of students:";
			cin>>n;
		}
		friend void compare(PEC p,GCES g);
};

class GCES
{
	int s;
	public:
		void getvalue()
		{
			cout<<"Enter no of students:";
			cin>>s;
		}
		friend void compare(PEC p,GCES g);
};

void compare(PEC p,GCES g)
{
	if(p.n>g.s)
	{
		cout<<"PEC has maximum number of students.";
	}
	else
	{
		cout<<"GCES has maximum number of students.";
	}
}

int main()
{
	PEC p1;
	GCES g1;
	p1.getval();
	g1.getvalue();
	compare(p1,g1);
}
