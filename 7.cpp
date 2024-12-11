#include <iostream>
using namespace std;
class Demo 
{
private:
    int num;
    static int count;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
        cout << "Square value: " << num * num << endl;
        count++;
    }

    static void showCount() 
	{
    	cout << "getdata function has been called " << count << " times." << endl;
    }
};

int Demo::count = 0;

int main() 
{
    Demo obj1, obj2, obj3;

    obj1.getData();
    obj2.getData();
    obj3.getData();

    Demo::showCount();

    return 0;
}


