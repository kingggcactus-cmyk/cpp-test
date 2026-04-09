#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int i;
    int x[100], y[100], d[100];
    for(i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> d[i];
        cin.get();
    }

    for(i = 0; i < n; i++)
    {
        if(d[i] >= t)
        {
            cout << x[i] << " " << y[i] << " " << d[i] << endl;
        }
    }
    return 0;
}