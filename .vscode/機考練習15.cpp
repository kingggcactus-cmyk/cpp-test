//成績判斷
#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if(score < 0 || score > 100)
    {
        cout << "成績輸入錯誤";
    }
    else if(score == 100)
    {
        cout << "成績滿分";
    }
    else if(score == 60)
    {
        cout << "低空飛過";
    }
    else if(score < 60)
    {
        cout << "成績不及格";
    }
    else if(score > 60)
    {
        cout << "成績及格";
    }
}

