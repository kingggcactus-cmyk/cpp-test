//單層迴圈寫九九乘法表
#include <iostream>
using namespace std;

int main()
{
    int i;
    for(i = 1; i <= 81; i++)
    {
        int row = (i-1)/9+1;
        int col = (i-1)%9+1;
        cout << row << "*" << col << "=" << row * col << "   ";

        if(col == 9)
        cout << endl;
    }
}