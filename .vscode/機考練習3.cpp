//美國台灣時間轉換練習
#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;
    int us;
    us = h-15;
    if(us<0)
    {
        us += 24;
    }
    cout << us;
}