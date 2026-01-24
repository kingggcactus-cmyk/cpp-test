//總合平均練習
#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout << "請輸入a,b,c的數";
    cin >> a >> b >> c;
    int sum = 0;
    sum = a+b+c;
    float avg = 0;
    avg = (a+b+c)/3;
    cout << "a,b,c的總和:" << sum << endl;
    cout << "a,b,c的平均:" << avg << endl;
}