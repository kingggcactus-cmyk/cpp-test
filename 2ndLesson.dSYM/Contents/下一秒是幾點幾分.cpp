#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    s++;

    if(s==60)
    {
        s=0;
        m++;
    }
    if(m==60)
    {
        m=0;
        h++;
    }
    if(h==24)
    {
        h=0;
    }
    cout << setw(2) << setfill('0') << h << ":";
    cout << setw(2) << setfill('0') << m << ":";
    cout << setw(2) << setfill('0') << s;
    return 0;
}