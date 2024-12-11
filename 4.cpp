#include<iostream>
using namespace std;
class batsman
{
	char n[20];
	int r,f,s;
	public:
	void inp()
	{
		cout<<"Enter name, runs, fours, sixes:";
		cin>>n>>r>>f>>s;
	}

		void display()
		{
			cout<<"Name:"<<n<<endl<<"Runs:"<<r<<endl<<
		    "Fours:"<<f<<endl<<"Sixes:"<<s<<endl;
		}
};
int main()
{
	int i;
	batsman obj[5];
	for(i=0;i<5;i++){
		obj[i].inp();
	}
	for(i=0;i<5;i++){
		obj[i].display();
	}
}
