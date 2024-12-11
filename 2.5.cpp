#include<iostream>
using namespace std;
class tu;
class pu
{
	private:
		int np;
		friend class tu;
			public:
			pu() : np(200){}
		void showTotal(tu &a)
		{
		
			cout<<"The total is "<<np+a.nt<<endl;	
		}
	
};

class tu
{
	private:
		int nt;
			friend class pu;
		public:
			tu() : nt(150){}
			void showdifference(pu &b)
			{
				
				cout<<"The difference is "<<b.np-nt;
			}
		
};

int main()
{
	pu b;
	tu a;
	p.showTotal(a);
	t.showdifference(b);
}
