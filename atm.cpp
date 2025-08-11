
#include <iostream>
using namespace std;
int main() {
    int value;
    int amount;
    int pin = 1234;
    int balance = 15000;
    cout << "Enter the pin: ";
    cin >> value;
    if(value == pin){
        
        cout << "Enter amount: ";
        cin >> amount;
        if(amount<10000){
            if(amount % 100 == 0){
                cout << "Tranaction successfull";
            }
            else
                cout << "Invalid transaction";
        }
        else
            cout << "Enter Valid Balance (<10000)";
    }
    else
        cout << "Enter correct pin";
    return 0;
}