//算圓的周長面積
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float r;
    cout << "請輸入圓的半徑";
    cin >> r;
    float Circumference,Area;
    Circumference = 2*r*3.14;
    Area = r*r*3.14;
    cout << fixed << setprecision(2);
    cout << "周長:" << Circumference << endl;
    cout << "面積:" << Area << endl;
}

