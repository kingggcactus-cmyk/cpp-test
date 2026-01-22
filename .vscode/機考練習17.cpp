//選擇結構練習
#include <iostream>
using namespace std;

int main()
{
    int rain_amount, wind_avg, wind_strength;
    cin >> rain_amount >> wind_avg >> wind_strength;

    if(rain_amount <= 0 || wind_avg <= 0 || wind_strength <= 0)
    {
        cout << "invalid input";
    }
    else if(rain_amount >= 350 || wind_avg >= 7 || wind_strength >= 10)
    {
        cout << "meet holiday standard";
    }
    else
    {
        cout << "not meet holiday standard";
    }
}