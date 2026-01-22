#include <iostream>
using namespace std;
void replace(int*, int, int);
int main()
{
    int a[5]={1, 2, 3, 4, 5};
    int i, num = 100;
    cout << "Before replace, the content in the array=";
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    replace(a, 3, num);
    cout << "After replace, the content in the array=";
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
void replace(int *ptr, int n, int num)
{
    *(ptr+n)=num;
    return;
}