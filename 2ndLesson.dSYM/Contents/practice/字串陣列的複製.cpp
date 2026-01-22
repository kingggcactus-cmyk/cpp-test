#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string students[3]={"David", "Sam", "Eric"};
    string strcopy[3];
    for(i = 0; i < 3; i++)
    strcopy[i]=students[i];
    for(i = 0; i < 3; i++)
    cout << "strcopy[" << i << "]=" << strcopy[i] << endl;
    return 0;
}