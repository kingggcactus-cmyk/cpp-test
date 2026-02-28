#include <iostream>
#include "Cwin.hpp"
using namespace std;
Cwin::Cwin(char ch, int w, int h):id(ch), width(w), height(h){}
void Cwin::show(void)
{
    cout << "window " << id << ":" << endl;
    cout << "area= " << width*height << endl;
}