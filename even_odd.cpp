#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num ;
    if(num == 0){
        cout << "not even or odd";
    }
    
    else if(num % 2 == 0){
        cout << "Even ";
    }
    else {
        cout << "odd";
    }

    return 0;
}