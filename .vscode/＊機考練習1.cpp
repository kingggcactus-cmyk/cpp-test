//排列三角形星星練習
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        for(int s = 0; s < n-i; s++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
            if(j != i)
            cout << " "; 
        }
        cout << endl;
    }
    return 0;

}