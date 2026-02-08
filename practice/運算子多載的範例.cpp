#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 10, int h = 10):id(i), width(w), height(h)
      {}
      Cwin operator+(const Cwin &win)
      {
        int w, h;
        w = this->width > win.width ? this->width : win.width;
        h = this->height > win.height ? this->height : win.height;
        return Cwin('D', w, h);
      }
      void show_member(void)
      {
        cout << "window " << id << ": ";
        cout << "width = " << width << ", height = " << height << endl;
      }
};

int main()
{
    Cwin win1('A', 70, 80);
    Cwin win2('B', 60, 90);
    Cwin win3;

    win3 = win1.operator+(win2); // win3 = win1 + win2;
    win3.show_member();
    return 0;
}