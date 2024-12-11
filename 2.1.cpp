#include<iostream>
using namespace std;
class compare
{
	int n1,n2;
	public:
		void getvalue()
		{
			cout<<"Enter two numbers:";
			cin>>n1>>n2;
		}
		friend void compa(compare a);
};

void compa(compare a)
{
	if(a.n1>a.n2)
	{
		cout<<"The greatest among "<<a.n1<<" and "<<a.n2<<" is "<<a.n1;
	}
	else
	{
		cout<<"The greatest among "<<a.n1<<" and "<<a.n2<<" is "<<a.n2;
	}
}

int main()
{
	compare b;
	b.getvalue();
	compa(b);
}
