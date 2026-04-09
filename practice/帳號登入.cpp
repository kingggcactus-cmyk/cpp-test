#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string acc, password;
    cout << "請輸入帳號: ";
    cin >> acc;
    if(acc != "user1" && acc != "admin") 
    {
        cout << "帳號錯誤" << endl;
        return 0;
    }
    cout << "請輸入密碼: ";
    cin >> password;
    if((acc == "user1" && password != "1234") || (acc == "admin" && password != "5678"))
    {
        cout << "密碼錯誤" << endl;
        return 0;
    }
    srand(time(0));
    int code = rand() % 9000 + 1000;
    cout << "========驗證碼: " << code << endl;
    int guess_code;
    cout << "請輸入驗證碼: ";
    cin >> guess_code;
    if(code == guess_code)
    {
        cout << "登入成功";
    }
    else cout << "驗證碼錯誤";
    return 0;
}