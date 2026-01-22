//九九乘法表 while
#include <iostream>
using namespace std;

int main()
{
    int j = 1;
    while(j <= 9)
    {
        int i = 1;
        while(i <= 9)
        {
            cout << i << "*" << j << "=" << i*j << "\t";
            i++;
        }
        cout << endl;
        j++;
    }
}