#include <iostream>
using namespace std;
int main()
{
    typedef float temp;
    temp f, c;
    cout << "Input Celsius degrees:";
    cin >> c;
    f=(float)(9/5)*c+32;
    cout << c << " Celsius is equal to ";
    cout << f << " Fahrenheit degrees " << endl;
    return 0;

}