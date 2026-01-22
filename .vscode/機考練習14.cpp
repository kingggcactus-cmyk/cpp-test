//BMI計算器2
#include <iostream>
using namespace std;

int main()
{
    float height, weight;
    cin >> height >> weight;
    float BMI_rate;
    BMI_rate = weight/(height*height)*10000;
    cout << "BMI rate:" << BMI_rate;

    if(BMI_rate > 24)
    {
        cout << "必須減肥";
    }
    else if(BMI_rate >=18 && BMI_rate < 24)
    {
        cout << "體重適中";
    }
    else if(BMI_rate < 18)
    {
        cout << "請多吃一點";
    }

}