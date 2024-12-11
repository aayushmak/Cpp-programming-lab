#include<iostream>
using namespace std;
class Rectangle
{
	int l,b,a;
	void getdata()
	{
		cout<<"Enter length and breadth:";
		cin>>l>>b;
	}
	public:
	void calculateArea()
	{
		getdata();
		a=l*b;
		cout<<"The area is "<<a;		
	}
};
int main()
{
	Rectangle obj;
	obj.calculateArea();
}
