#include <iostream>
using namespace std;
class Item {
private:
    int itemNumber;
    static int count;

public:
    Item() {
        itemNumber = 0;
    }

    void getData() {
        cout << "Enter item number: ";
        cin >> itemNumber;
        count++;
    }

    static void displayCount() {
        cout << "Total number of times getData() called: " << count << std::endl;
    }
};

int Item::count = 0;  
int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    Item* items[n];

    for (int i = 0; i < n; i++) {
        items[i] = new Item();
        items[i]->getData();
    }

    Item::displayCount();

    for (int i = 0; i < n; i++) {
        delete items[i];
    }

    return 0;
}

