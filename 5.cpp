#include<iostream>
using namespace std;
class calculate
{
	int a, rev, rem;
	void getnum()
	{
		cout<<"Enter a number:";
		cin>>a;
	}
	public:
		void reverse()
		{
			getnum();
			while(a!=0)
			{
				rem=a%10;
				rev=rev*10+rem;
				a=a/10;
			}
			cout<<"Reversed number is "<<rev;		
		}
};
int main()
{
	calculate obj;
	obj.reverse();
}
