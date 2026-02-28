#include "Cwin.hpp"
#include <iostream>
using namespace std;
void Cwin::show(void)
{
    cout << "window " << id << ":" << endl;
    cout << "area= " << width*height << endl;
}