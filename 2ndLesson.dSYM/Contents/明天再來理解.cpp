#include <iostream>
using namespace std;

// 計算 x 的 n 次方
double power(double x, int n) {
    double result = 1.0;   // 初始值設為 1
    for (int i = 1; i <= n; i++) {
        result *= x;       // result = result * x
    }
    return result;         // 回傳結果
}

int main() 
{
    double base;
    int exponent;

    cout << "請輸入底數 (x):";
    cin >> base;
    cout << "請輸入次方 (n):";
    cin >> exponent;

    cout << base << " 的 " << exponent << " 次方是 "
         << power(base, exponent) << endl;

    return 0;
}
