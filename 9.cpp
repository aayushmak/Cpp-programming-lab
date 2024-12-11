#include<iostream>
using namespace std;
class employee
{
	char n[25],a[25];
	int ph,s,ns,tx;
	void calculate(){
		ns=s-tx;
	}
	public:
		void inp()
		{
			cout<<"Enter name,address,ph num,salary,tax:"<<endl;
			cin>>n>>a>>ph>>s>>tx;
		}
		void out()
		{
			calculate();
			cout<<"Name: "<<n<<endl<<
			"Address: "<<a<<endl<<
			"Phone number: "<<ph<<endl<<
			"Salary: "<<s<<endl<<
			"Tax: "<<tx<<endl<<
			"Net Salary: "<<ns<<endl;
		}
};
int main()
{
	employee obj;
	obj.inp();
	obj.out();
}
