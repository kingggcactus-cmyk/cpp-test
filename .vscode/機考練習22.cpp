//數字反轉
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "請輸入一個整數:";
    cin >> n;

    do
    {
        rev = rev * 10 + (n%10);
        n = n/10;

    } while (n != 0);

    cout << "反轉後:" << rev;
    
}
