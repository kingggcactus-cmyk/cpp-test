//BMI計算
#include <iostream>
using namespace std;

int main()
{
    float height, weight;
    cin >> height >> weight;
    float BMI_rate;
    BMI_rate = weight/(height*height)*10000;
    cout << "BMI rate:" << BMI_rate;
}