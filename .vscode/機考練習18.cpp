//模擬選單功能
#include <iostream>
using namespace std;

int main()
{
    cout << "歡迎來到大東海點餐機，請輸入欲執" << endl;
    cout << "行的功能:" << endl;
    cout << "(1)點餐" << endl;
    cout << "(2)繳費" << endl;
    cout << "(3)自毀模式" << endl;
    cout << "-------------------" << endl;
    int choice;
    cin >> choice;

    if(choice == 1)
    {
        cout << "成功進入(1)點餐模式";
    }
    else if(choice == 2)
    {
        cout << "成功進入(2)繳費模式";
    }
    else if(choice == 3)
    {
        cout << "成功進入(3)自毀模式";
    }
    else 
    {
        cout << "系統故障";
    }



}