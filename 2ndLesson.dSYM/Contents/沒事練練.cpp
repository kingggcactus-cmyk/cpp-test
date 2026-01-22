#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int score[8];
    for(int i = 0; i < 8; i++)
    {
        cin >> score[i];
    }

    max = score[0];
    for(int i = 0; i < 8; i++)
    {
        if(score[i]>max)
        max = score[i];
    }
    cout << "max=" << max;
    return 0;
}