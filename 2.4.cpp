#include<iostream>
using namespace std;
class DB;
class DM
{
	private:
	int m,cm;
	public:
	void getvalue()
	{
		cout<<"Enter distance in meters and centimeters respectively:";
		cin>>m>>cm;
	}
	friend void sum(DM a,DB b);
};

class DB
{
	private:
	int ft,in;
	public:
	void getval()
	{
		cout<<"Enter distance in feet and inches respectively:";
		cin>>ft>>in;
	}
	friend void sum(DM a,DB b);
};

void sum(DM a,DB b)
{
	int s,q;
	s=a.m+a.cm/100+b.ft*0.3048+b.in*0.3048/12;
	q=a.m*3.28084+a.cm*3.28084/100+b.ft+b.in/12;
	cout<<"Distance in meter:"<<s<<endl;
	cout<<"Distance in feet: "<<q<<endl;
}
 int main()
 {
 	DB c;
 	DM d;
 	c.getval();
 	d.getvalue();
 	sum(d,c);
 }


