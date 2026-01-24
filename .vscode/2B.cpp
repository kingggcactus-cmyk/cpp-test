//**********************************************
// Name: 王廷愷
// Class: 資管系
// SID: s14490037
// Function: 長條圖橫向輸出
// Homework: No.2
// Date: 2025/11/15
//**********************************************



#include <iostream>          // 使用 cin、cout
using namespace std;         // 讓我們可以直接寫 cout

int main() {                 // 主程式開始

    long long num;           // 用來存輸入的整數（最多 15 位）
    char marker;             // 長條圖使用的符號

    cout << "請輸入一串長度 <= 15 的數字（0~9）：";
    cin >> num;              // 讀入整串數字

    if (num < 0) {           // 作業不允許負數
        cout << "不得輸入負數。\n";
        return 0;
    }

    cout << "請輸入長條圖要用的符號：";
    cin >> marker;           // 用什麼符號畫長條

    // 不能用陣列 → 用 15 個獨立變數
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    int d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
    int d11 = 0, d12 = 0, d13 = 0, d14 = 0, d15 = 0;

    int n = 0;               // 記錄共有幾位數

    if (num == 0) {          // 輸入為 0 → 特別處理
        n = 1;
        d1 = 0;
    } else {
        while (num > 0 && n < 15) {   // 一位一位拆
            int digit = num % 10;     // 取個位數
            num = num / 10;           // 去掉個位
            n = n + 1;                // 位數 +1

            // 依序放入 d1 ~ d15（倒序）
            if (n == 1)       d1 = digit;
            else if (n == 2)  d2 = digit;
            else if (n == 3)  d3 = digit;
            else if (n == 4)  d4 = digit;
            else if (n == 5)  d5 = digit;
            else if (n == 6)  d6 = digit;
            else if (n == 7)  d7 = digit;
            else if (n == 8)  d8 = digit;
            else if (n == 9)  d9 = digit;
            else if (n == 10) d10 = digit;
            else if (n == 11) d11 = digit;
            else if (n == 12) d12 = digit;
            else if (n == 13) d13 = digit;
            else if (n == 14) d14 = digit;
            else if (n == 15) d15 = digit;
        }

        if (num > 0) {        // 超過 15 位 → 不合法
            cout << "輸入長度超過 15 位。\n";
            return 0;
        }
    }

    // -----------------------------
    //    開始「橫向」輸出長條圖
    // -----------------------------

    int pos = n;              // 從第 n 位（最左邊）開始一路到 d1

    while (pos >= 1) {        // 每一次印一行

        int digit = 0;        // 讀出目前的數字

        if (pos == 1)       digit = d1;
        else if (pos == 2)  digit = d2;
        else if (pos == 3)  digit = d3;
        else if (pos == 4)  digit = d4;
        else if (pos == 5)  digit = d5;
        else if (pos == 6)  digit = d6;
        else if (pos == 7)  digit = d7;
        else if (pos == 8)  digit = d8;
        else if (pos == 9)  digit = d9;
        else if (pos == 10) digit = d10;
        else if (pos == 11) digit = d11;
        else if (pos == 12) digit = d12;
        else if (pos == 13) digit = d13;
        else if (pos == 14) digit = d14;
        else if (pos == 15) digit = d15;

        cout << digit << ": ";    // 開頭印出「數字: 」

        // 依數字數量畫 marker（橫向）
        int count = 0;
        while (count < digit) {
            cout << marker;
            count = count + 1;
        }

        cout << "\n";             // 下一行

        pos = pos - 1;            // 移到下一個數字
    }

    return 0;                     // 程式結束
}
