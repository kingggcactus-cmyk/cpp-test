#include <iostream>
#include "Cwin.hpp"
using namespace std;
class CMiniWin: public Cwin{
    public:
      CMiniWin(char ch, int w, int h):Cwin(ch, w, h){}
      void show(void)
      {
        cout << "Mini window " << id << ":" << endl;
        cout << "Area= " << 0.8*width*height << endl;
      }
};