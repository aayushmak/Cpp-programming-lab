#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
	void getData();
	void calculateArea();
};
void rectangle::getData()
{
	cout<<"Enter length and bredth:"<<endl;
	cin>>l>>b;
}
void rectangle::calculateArea()
{
	int a=l*b;
	cout<<"The area is "<<a;
}
int main()
{
	rectangle obj;
	obj.getData();
	obj.calculateArea();
}
