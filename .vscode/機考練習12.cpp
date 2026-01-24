//解密字元進階
#include <iostream>
using namespace std;

int main()
{
    string cipher;
    cin >> cipher;
    for(int i = 0; i < cipher.length(); i++)
    {
        cipher[i] += 5;
    }
    cout << cipher;
}