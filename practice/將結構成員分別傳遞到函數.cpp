#include <iostream>
#include <string>
using namespace std;
struct mydata{
    string name;
    int math;
    int eng;
};

float avg(int, int);

int main()
{
    mydata num = {"Alice", 71, 80};
    cout << num.name << "'s math score= " << num.math;
    cout << endl << "english's score= " << num.eng << endl;
    cout << "average= " << avg(num.math, num.eng) << endl;
    return 0;
}

float avg(int a, int b)
{
    return (float)(a+b)/2;
}