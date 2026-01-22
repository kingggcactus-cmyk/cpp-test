#include <iostream>
using namespace std;

void swap(int *, int *);
int main()
{
    int a = 5, b = 20;
    cout << "交換前 a=" << a << ", b= " << b << endl;
    swap(&a, &b);
    cout << "交換後 a=" << a << ", b= " << b << endl;
    return 0;
}
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}