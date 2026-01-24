//大小寫轉換
#include <iostream>
using namespace std;

int main()
{
    char upper, digit;
    cin >> upper >> digit;
    int num = digit - '0';
    char lower = upper + 32;
    cout << lower;
    cout << num;
}