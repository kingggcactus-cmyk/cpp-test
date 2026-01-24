//選擇結構
#include <iostream>
using namespace std;

int main()
{
    int stock_rise_rate;
    cin >> stock_rise_rate;

    if(stock_rise_rate > 0)
    {
        cout << "happy, investor";
    }
    else
    {
        cout << "sad investor";
    }
}