#include <iostream>
using namespace std; 


void refine(int &dur, int &atk)
{
    if(dur>10)
    {
        dur -= 10;
        atk += 5;
    }
}
void polish(int &atk, int &dur)
{
    if(atk > 5)
    {
        atk -= 5;
        dur += 20;
    }
}
void awaken(int &atk, int &dur, int &rar)
{
    if(atk >100 && dur >100)
    {
        atk -= 50;
        dur -= 50;
        rar += 1;
    }
}

int main()
{
    int atk, dur, rur;
    cin >> atk >> dur >> rur;
    int N;
    cin >> N;
    char ch;
    while(N--)
    {
        cin >> ch;
        if(ch=='R')
        {
            refine(dur, atk);
        }
        else if(ch=='P')
        {
            polish(atk, dur);
        }
        else if(ch=='A')
        {
            awaken(atk, dur, dur);
        }
    }
    cout << atk << " " << dur << " " << rur;
    return 0;

}