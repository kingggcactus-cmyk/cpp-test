#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    for(i = 0; i < 6; i++)
    {
        int num = (s[i] - '0' + 7) % 10;
        s[i] = num + '0';
    }

    for(i = 5; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}