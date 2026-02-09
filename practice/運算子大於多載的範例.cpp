#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {}
      bool operator>(Cwin &win)
      {
        return(this->area() > win.area());
      }
      int area()
      {
        return width * height;
      }
};

int main()
{
    Cwin win1('A', 70, 80);
    Cwin win2('B', 60, 90);

    if(win1 > win2)
      cout << "win1 is larger than win2" << endl;
    else
      cout << "win2 is larger than win1" << endl;
      return 0; 
}