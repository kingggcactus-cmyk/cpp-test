#include <iostream>
using namespace std;

int main()
{
    int i, j, sum;
    int sale[2][4]={{30, 35, 36, 32},
                    {33, 34, 30, 29}};
    for(i = 0; i < 2; i++)
    { 
        cout << "業務員" << (i+1) << "的業績分別為:";
        for(j = 0; j < 4; j++)
        {
            cout << sale[i][j] << " ";
            sum += sale[i][j];
        }
        cout << endl;
    }
    cout << endl << "本年度銷售總量為" << sum << "輛車";
    return 0;
}