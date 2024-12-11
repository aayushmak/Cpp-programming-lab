#include <iostream>
using namespace std;

class Time 
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    friend void addTime( Time& t1,  Time& t2);
};

void  addTime( Time& t1,  Time& t2) {
    int sumh,summ,sums;

    sumh = t1.hours + t2.hours;
    summ= t1.minutes + t2.minutes;
    sums = t1.seconds + t2.seconds;

    if (sums >= 60) {
        summ += sums / 60;
        sums %= 60;
    }

    if (summ >= 60) {
        sumh += summ / 60;
        summ %= 60;
    }
	cout << "\nTotal time:\n";
    cout << "Hours: " << sumh << endl;
    cout << "Minutes: " << summ << endl;
    cout << "Seconds: " << sums << endl;

}

int main() {
  	int t1,t2;

    cout << "Enter values for the first time:\n";
    

    cout << "\nEnter values for the second time:\n";
  
	Time total1,total2;
	total1.inputTime();
    addTime(total1,total1);

    


}

