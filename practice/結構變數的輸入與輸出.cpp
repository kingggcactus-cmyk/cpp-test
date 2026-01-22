#include <iostream>
#include <string>
using namespace std;
struct mydata{
    string name;
    int math;
}student;

int main()
{
    cout << "student's name:";
    getline(cin, student.name);
    cout << "student's math score:";
    cin >> student.math;
    cout << "*****OUTPUT*****" << endl;
    cout << student.name << "'s math score is " << student.math;
    return 0;
}