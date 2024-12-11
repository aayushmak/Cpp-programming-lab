#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		void readData()
		{
			cout<<"Enter the length, breadth and height:";
			cin>>l>>b>>h;
		}
		int showVolume()
		{
			readData();
			return l*b*h;

		}
};
int main()
{
	int a;
	box obj;
	a=obj.showVolume();
	cout<<"Volume:"<<a;

}
