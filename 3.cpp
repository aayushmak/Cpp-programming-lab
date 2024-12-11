#include<iostream>
using namespace std;
class swapp
{
	int num1,num2;
	public:
		void swapdata(int num1,int num2)
		{
			cout<<"The numbers are a="<<num1<<"  b="<<num2<<endl;
			num1=num1+num2;
			num2=num1-num2;
			num1=num1-num2;
			cout<<"The swapped numbers are a="<<num1<<"  b="<<num2;
		}
};
int main()
{
	int a,b;
	cout<<"Enter any two numbers:";
	cin>>a>>b;
	swapp obj;
	obj.swapdata(a,b);
}
