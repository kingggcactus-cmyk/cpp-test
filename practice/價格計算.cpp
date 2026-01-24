#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;
    cout << "消費額為";
    cin >> i;
    if (3000 < i && i < 4999)
    {
        cout << "應支付的金額為" << i*0.92 << endl;
    }
    else if (5000 < i && i < 9999)
    {
        cout << "應支付的金額為" << i*0.9 << endl;
    }
    else if (i > 10000)
    {
        cout << "應支付的金額為" << i*0.85 << endl;
    }
    return 0;
    

}