// Write a C++ program to generate an electricity Bill
#include <iostream>
using namespace std;
int main() {
    int m1, m2, m3, unit, rate, rate1, rate2, rate3, sum;
    
    cout << "Enter total unit month wise \n";
    cin >> m1 >> m2 >> m3;
    
    cout << "enter rate: ";
    cin >> rate;
    
    unit = m1+m2+m3;
    cout << unit << " total unit \n";
    
    rate1 = rate*m1;
    cout << "for month 1 =" << rate1 << endl;
    
    rate2 = rate*m2; 
    cout << "for month 2 =" << rate2 << endl;
    
    rate3 = rate*m3; 
    cout << "for month 3 =" << rate3 << endl;
    
    sum = rate1+ rate2 + rate3 ;
    cout << "Total bill " << sum;
    
    return 0;

}
