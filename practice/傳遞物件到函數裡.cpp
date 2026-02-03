#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {}
      void compare(Cwin win)
      {
        if(this->area() > win.area())
        cout << "window " << this->id << " is larger" << endl;
        else
        cout << "window " << win.id << " is larger" << endl;
      }
      int area()
      {
        return width*height;
      }
};

int main()
{
    Cwin win1('A', 70, 80);
    Cwin win2('B', 60, 90);
    win1.compare(win2);
    return 0;
}