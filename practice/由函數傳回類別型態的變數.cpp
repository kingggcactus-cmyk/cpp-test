#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {}
      Cwin compare(Cwin win)
      {
        if(this->area() >= win.area())
        return *this;
        else
        return win;
      }
      int area()
      {
        return width*height;
      }
      char get_id()
      {
        return id;
      }
};

int main()
{
    Cwin win1('A', 70, 80);
    Cwin win2('B', 60, 90);
    cout << "window " << (win1.compare(win2)).get_id();
    cout << " is larger" << endl;
    return 0;
}