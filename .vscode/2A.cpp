//**********************************************
// Name: 王廷愷
// Class: 資管系
// SID: s14490037
// Function: 長條圖縱向輸出
// Homework: No.1
// Date: 2025/11/15
//**********************************************




#include <iostream>          // 引入輸出入工具，才能用 cin 與 cout
using namespace std;         // 讓我們不用寫 std::cout，寫 cout 就好

int main() {                 // 程式從這裡開始

    long long num;           // 用來存使用者輸入的整數（最多 15 位）
    char marker;             // 長條圖用來畫的符號

    cout << "請輸入一串長度 <= 15 的數字（0~9）：";  // 提示使用者輸入
    cin >> num;              // 讀入這串數字（以整數方式讀）

    if (num < 0) {           // 如果輸入負數就報錯
        cout << "不得輸入負數。\n";
        return 0;            // 結束程式
    }

    cout << "請輸入長條圖要用的符號：";  // 提示輸入符號
    cin >> marker;           // 讀入一個字元（marker）

    // 以下 15 個變數，用來存第 1 ~ 第 15 位數字（不是陣列！）
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    int d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
    int d11 = 0, d12 = 0, d13 = 0, d14 = 0, d15 = 0;

    int n = 0;               // 記錄實際輸入共有幾位數
    int maxDigit = 0;        // 目前找到的最大數字，用來知道長條圖最大高度

    if (num == 0) {          // 特別處理輸入為 0 的情況
        n = 1;               // 只有一位
        d1 = 0;              // 那一位就是 0
        maxDigit = 0;        // 最大值也是 0
    } else {
        while (num > 0 && n < 15) {    // 當還有數字可以拆且位數不到 15
            int digit = num % 10;      // 取個位數
            num = num / 10;            // 去掉個位數
            n = n + 1;                 // 位數加 1

            // 把 digit 存入對應的變數（第 n 位）
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

            if (digit > maxDigit) {    // 更新目前最大數字
                maxDigit = digit;
            }
        }

        if (num > 0) {                 // 超過 15 位數就不合法
            cout << "輸入長度超過 15 位。\n";
            return 0;                  // 結束
        }
    }

    int level = maxDigit;              // 從最大高度開始往下畫

    while (level >= 1) {               // 每次畫一層長條圖

        int pos = n;                   // 從最高位（最左邊）開始往右畫

        while (pos >= 1) {             // 一次畫一個柱子
            int digit = 0;             // 儲存目前柱子的數字

            // 根據 pos 決定讀哪一個變數（還原成由左到右）
            if (pos == 1)        digit = d1;
            else if (pos == 2)   digit = d2;
            else if (pos == 3)   digit = d3;
            else if (pos == 4)   digit = d4;
            else if (pos == 5)   digit = d5;
            else if (pos == 6)   digit = d6;
            else if (pos == 7)   digit = d7;
            else if (pos == 8)   digit = d8;
            else if (pos == 9)   digit = d9;
            else if (pos == 10)  digit = d10;
            else if (pos == 11)  digit = d11;
            else if (pos == 12)  digit = d12;
            else if (pos == 13)  digit = d13;
            else if (pos == 14)  digit = d14;
            else if (pos == 15)  digit = d15;

            if (digit >= level)        // 若這柱子的高度 >= 目前層
                cout << marker;         // 這一層要畫出符號
            else
                cout << " ";            // 否則印空白

            if (pos != 1)              // 柱子之間空一格
                cout << " ";

            pos = pos - 1;             // 右邊移到下一個柱子
        }

        cout << "\n";                  // 換下一層
        level = level - 1;             // 高度 -1 繼續畫下面一層
    }

    int pos2 = n;                      // 最下面印原始數字（從左到右）

    while (pos2 >= 1) {                // 一個個柱子印出數字
        int digit = 0;

        if (pos2 == 1)       digit = d1;
        else if (pos2 == 2)  digit = d2;
        else if (pos2 == 3)  digit = d3;
        else if (pos2 == 4)  digit = d4;
        else if (pos2 == 5)  digit = d5;
        else if (pos2 == 6)  digit = d6;
        else if (pos2 == 7)  digit = d7;
        else if (pos2 == 8)  digit = d8;
        else if (pos2 == 9)  digit = d9;
        else if (pos2 == 10) digit = d10;
        else if (pos2 == 11) digit = d11;
        else if (pos2 == 12) digit = d12;
        else if (pos2 == 13) digit = d13;
        else if (pos2 == 14) digit = d14;
        else if (pos2 == 15) digit = d15;

        cout << digit;                 // 印出數字本身

        if (pos2 != 1)                 // 中間空一格
            cout << " ";

        pos2 = pos2 - 1;               // 右移一位
    }

    cout << "\n";                      // 換行

    return 0;                          // 程式結束
}
