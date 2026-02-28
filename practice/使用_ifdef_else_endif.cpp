#include <iostream>
#define STR "hello C++"
using namespace std;
int main()
{
    #ifdef STR
    cout << STR << endl;
    #else
    cout << "STR not defined" << endl;
    #endif
    return 0;
}