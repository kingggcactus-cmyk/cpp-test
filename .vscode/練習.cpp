#include <iostream>
using namespace std;

// 外部靜態變數 (代表公里)
static double km;

// 函數：把 km 轉成英哩
double miles(void) {
    return km / 1.6;
}

int main() {

    int testValues[] = {10, 15, 20, 25, 30};

    for (int i = 0; i < 5; i++) {
        km = testValues[i];   // 改變 km 的值
        cout << km << " 公里 = " << miles() << " 英哩" << endl;
    }

    return 0;
}

