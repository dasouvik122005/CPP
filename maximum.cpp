#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two num ";
    cin >> num1 >> num2 ;
    if(num1>num2)
        cout << num1 << " is maximum";
    else 
        cout << num2 << " is maximum";
    return 0;
}