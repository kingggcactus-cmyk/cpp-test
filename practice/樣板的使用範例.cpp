#include <iostream>
using namespace std;
template <typename T1, typename T2>
double average(T1 a, T2 b)
{
    cout << "sizeof(a)= " << sizeof(a) << ", ";
    cout << "sizeof(b)= " << sizeof(b) << endl;
    return (double)(a+b)/2;
} 

int main()
{
    cout << "average(3, 4.2)" << average<int, double>(3, 4.2) << endl;
    cout << "average(5.7, 12)" << average<double, int>(5.7, 12) << endl;
    return 0;
}