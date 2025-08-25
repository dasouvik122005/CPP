// Write a C++ program for implementing a shopping mall bill generation for several items, also illustrate the constructor and destructor concepts . 
#include <iostream>
#include <cstring>
using namespace std;

class Item {
private:
    char* name;
    float price;
    int quantity;

public:
    // 1. non parameterized Constructor
    Item() {
        name = new char[20]; 
        strcpy(name, "Unknown");
        price = 0.0;
        quantity = 0;
        cout << "Default Constructor called!" << endl;
    }

    // 2. Parameterized Constructor
    Item(const char* n, float p, int q) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        price = p;
        quantity = q;
        cout << "Parameterized Constructor called!" << endl;
    }

    // 3. Copy Constructor
    Item(const Item& it) {
        name = new char[strlen(it.name) + 1];
        strcpy(name, it.name);
        price = it.price;
        quantity = it.quantity;
        cout << "Copy Constructor called!" << endl;
    }

    // 4. Dynamic Constructor
    Item(int size) {
        name = new char[size];
        strcpy(name, "DynamicItem");
        price = 10.0;
        quantity = 1;
        cout << "Dynamic Constructor called!" << endl;
    }

    // Destructor
    ~Item() {
        cout << "Destructor called for " << name << endl;
        delete[] name;
    }

    float getTotal() { return price * quantity; }

    void display() {
        cout << name 
             << "  (Price: " << price 
             << ", Qty: " << quantity 
             << ")  => Total: " << getTotal() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item* bill[n]; 
    float grandTotal = 0;

    // Taking input
    for (int i = 0; i < n; i++) {
        char tempName[50];
        float price;
        int qty;

        cout << "\nEnter item " << i + 1 << " name: ";
        cin >> tempName;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> qty;

        bill[i] = new Item(tempName, price, qty);
        grandTotal += bill[i]->getTotal();  // accumulate bill directly
    }

    // Display Final Bill
    cout << "\n===== CUSTOMER BILL =====\n";
    for (int i = 0; i < n; i++) {
        bill[i]->display();
    }
    cout << "---------------------------\n";
    cout << "TOTAL AMOUNT: " << grandTotal << endl;
    cout << "===========================\n";

    // Cleanup memory
    for (int i = 0; i < n; i++) {
        delete bill[i];
    }

    return 0;
}
