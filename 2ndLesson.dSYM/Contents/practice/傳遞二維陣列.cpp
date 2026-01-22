#include <iostream>
using namespace std;
#define len 2
#define wid 5
void show(int a[len][wid]);
int main()
{
    int a[len][wid]={{81, 52, 13, 96, 27},
                     {24, 23, 10, 32, 16}};
    show(a);
    return 0;
}

void show(int a[len][wid])
{
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < wid; j++)
        cout << a[i][j] << " ";
        cout << endl;
    }
    return;
}