#include <iostream>
using namespace std;
class AddAmount {
private:
    double amount;

public:
    
    AddAmount() : amount(50.0) {}


    AddAmount(double addAmount) : amount(50.0 + addAmount) {}

 
    double getAmount() {
        return amount;
    }
};

int main() {
    AddAmount account1;  
    cout << "Final amount in account1: $" << account1.getAmount() << endl;

    AddAmount account2(100.0); 
    cout << "Final amount in account2: $" << account2.getAmount() << endl;

    return 0;
}

