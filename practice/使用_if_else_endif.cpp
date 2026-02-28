#include <iostream>
#define size 15
using namespace std;
int main()
{
    #ifdef size
    #if size > 20
    const char str[size] = "hello C++";
    #else
    const char *str = "size too small";
    #endif
    #else
    const char *str = "size not definded";
    #endif

    cout << str << endl;
    return 0;
}