#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = N; i >= 1; i--)
    {
        for(int space = 0; space < N-i; space++)
        {
            cout << " ";
        }
    for(int star = 1; star <= i; star++)
    {
        cout << "*";
        if(star < i) cout << " ";
    }
    cout << endl;
    }
    for(int i = 2; i <= N; i++)
    {
        for(int space = 0; space < N-i; space++)
        {
            cout << " ";
        }
    
    for(int star = 1; star <= i; star++)
    {
        cout << "*";
        if(star < i) cout << " ";
    }
    cout << endl;
    }
    return 0;
}