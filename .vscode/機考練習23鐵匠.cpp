#include <iostream>
using namespace std;

int main()
{
    int atk, dur, rur;
    cin >> atk >> dur >> rur;
    int N;
    cin >> N;
    while(N--)
    {
        char c;
        cin >> c;
    

    if(c =='R')
    {
        if(dur>=10)
        {
            dur -= 10;
            atk += 5;
        }
    }
    else if(c =='P')
    {
        if(atk>=5)
        {
            atk -= 5;
            dur += 20;
        }
    }
    else if(c =='A')
    {
        if(atk>100 && dur>100)
        {
            atk -= 50;
            dur -= 50;
            rur += 1;
        }
cout << atk << " " << dur << " " << rur;
 }
    }
    return 0;
}