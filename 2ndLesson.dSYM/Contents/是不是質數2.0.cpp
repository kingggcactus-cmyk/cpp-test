#include <iostream>
using namespace std;

// 判斷是否為質數
bool primeQ(int n) {
    if (n <= 1) 
    return false; // 1 或負數都不是質數
    for (int i = 2; i * i <= n; i++) { // 檢查從 2 到 √n
        if (n % i == 0) return false; // 可以整除 → 不是質數
    }
    return true; // 迴圈跑完都沒被整除 → 是質數
}

int main() {
    int num;
    cout << "請輸入一個整數：";
    cin >> num;

    if (primeQ(num))
        cout << num << " 是質數。" << endl;
    else
        cout << num << " 不是質數。" << endl;

    return 0;
}
