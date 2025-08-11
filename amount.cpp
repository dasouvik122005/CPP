// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i,amount,dailyexpance;
    int total = 0;
    cout << "enter the daily expances for 7 days: \n";
    for(i=1;i<=7;i++){
        cout << "day " << i << ": ";
        cin >> amount;
        total += amount;
    }
    
    cout << "Total Expances: " << total;
    

    return 0;
}