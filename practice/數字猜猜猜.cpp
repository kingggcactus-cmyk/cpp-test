#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ans, guess;
    cin >> ans >> guess;
    int A = 0, B = 0, i, j;
    for(i = 0; i < 4; i++)
    {
        if(ans[i] == guess[i]) A++;
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(i != j && ans[i] == guess[j]) B++;
        }
    }
    cout << A << "A" << B << "B";
    return 0;
}