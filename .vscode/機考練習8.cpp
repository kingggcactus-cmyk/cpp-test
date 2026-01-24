//鏡頭焦距換算
#include <iostream>
using namespace std;

int main()
{
    float f;
    cin >> f;
    cout << "縮放倍率:" << f << "mm" << endl;
    float scale;
    scale = f/50;
    float weight, height;
    weight = 1776*scale;
    height = 1184*scale;
    cout << weight << "*" << height;
}