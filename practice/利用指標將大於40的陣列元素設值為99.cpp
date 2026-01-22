#include <iostream>
using namespace std;

int main()
{
    int num[3][4]={{12, 23, 42, 18},
                   {43, 22, 16, 14},
                   {31, 13, 19, 28}};
    int m, n;
    for(m = 0; m < 3; m++)
    {
        for(n = 0; n < 4; n++)
        {
            if(*(*(num+m)+n)>40)
            *(*(num+m)+n)=99;
            cout << *(*(num+m)+n) << " ";
        }
        cout << endl;
    }
    return 0;
}