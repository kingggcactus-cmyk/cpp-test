#include <iostream>
using namespace std;

int main()
{
    long long a[5];
    bool valid = false;

    while(!valid)
    {
        valid = true;
        for(int i = 0; i < 5; i++)
        {
        cin >> a[i];
        if(a[i]<1 || a[i]>1000000000) valid = false;
    }
    }
    if(!valid)
    {
        cout << "輸入超出範圍，請重新輸入五個數字\n";
    }
    int maxIndex = 0;
    for(int i = 1; i < 5; i++)
    {
        if(a[i]>a[maxIndex])
    {
        maxIndex = i;
    }
    }
    long long temp;
    temp = a[0];
    a[0] = a[maxIndex];
    a[maxIndex] = temp;

    int minIndex = 0;
    for(int i = 1; i < 5; i++)
    {
        if(a[i]<a[minIndex])
        {
            minIndex = i;
        }
    }
    temp = a[4];
    a[4] = a[minIndex];
    a[minIndex] = temp;

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}