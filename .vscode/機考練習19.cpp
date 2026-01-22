//九九乘法表 for
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(int j = 1; j <=9; j++)
    {
        for(int i= 1; i <= 9; i++)
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << endl;
    }
}