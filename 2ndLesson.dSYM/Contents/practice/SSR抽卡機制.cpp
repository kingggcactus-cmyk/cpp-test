#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    srand(12345);
    int SSR=0, SR=0, R=0;
    int noSSRCount = 0;

    for(int i = 0;i < N; i++)
    {
        int randNum = rand()%100;
        if(randNum < 1)
        {
            SSR++;
            noSSRCount = 0;
        }
        else if(randNum < 30)
        {
            SR++;
            noSSRCount++;
        }
        else
        {
            R++;
            noSSRCount++;
        }
        if(noSSRCount == 100)
        {
            SSR++;
            R--;
            noSSRCount = 0;
        }
    }
    cout << "SSR=" << SSR << endl;
    cout << "SR=" << SR << endl;
    cout << "R=" << R << endl;
    return 0;
}