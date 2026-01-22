#include <iostream>
using namespace std;

int main()
{
    int i, *a;
    a = new int[5];
    for(i = 0; i < 5; i++)
    a[i] = i*2;
    for(i = 0; i < 5; i++)
    cout << "a[" << i << "]=" << a[i] << " ";
    cout << endl;
    delete[] a;
    a = nullptr;
    return 0;
}