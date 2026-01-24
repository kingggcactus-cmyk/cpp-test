//解密字元
#include <iostream>
using namespace std;

int main()
{
    char cipher;
    cin >> cipher;
    int K = -5;
    char plain;
    plain = cipher - K;
    cout << plain;
}