#include <iostream>
using namespace std;
// class defination
class student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setData(string n, int r, float m){
        name = n;
        rollNo = r;
        marks = m;
    }
    // access speifier are three type- public, private, protected
        //public: all
        //private: only one 
        //protected: few
    // method
    // method to display student info
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main(){
    student s1, s2, s3;
    s1.setData ("Rahul",1,85.6);
    s2.setData ("Ratul",2,89.8);
    s3.setData ("Arka",3,90.3);

    s1.displayData();
    cout << endl;
    s2.displayData();
    cout << endl;
    s3.displayData();

    return 0;
}
