#include <iostream>
using namespace std;
int *maximun(int *);

int main()
{
    int i, *ptr, a[5]={3, 1, 7, 2, 6};
    cout << "陣列的內容為";
    for(i = 0; i < 5; i++)
    cout << a[i] << " ";
    cout << endl;
    ptr = maximun(a);
    cout << "最大值為" << *ptr << endl;
    return 0;
}
int *maximun(int *arr)
{
    int i, *max;
    max = arr;
    for(i = 0; i < 5; i++)
    {
        if(*max < *(arr+i))
        max = arr+i;
    }
    return max;
}