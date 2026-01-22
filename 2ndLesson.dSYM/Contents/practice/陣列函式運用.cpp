#include <iostream>
using namespace std;
#define size 5
void show(int a[]);
double average(int a[]);

int main()
{
    int score[size]={89, 54, 73, 95, 71};
    cout << "學生的成績為:" << endl;
    show(score);
    cout << "平均成績為:" << average(score) << endl;
    return 0;
}

void show(int a[])
{
    for(int i = 0; i < size; i++)
    cout << a[i] << " ";
    cout << endl;
    return;
}

double average(int a[])
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    sum += a[i];
    return(sum/size);
}
