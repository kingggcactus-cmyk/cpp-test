#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {}
      int  operator>(Cwin &win)
      {
        return(this->area() > win.area());
      }
      int operator>(const int &var)
      {
        return(this->area() > var);
      }
      int area()
      {
        return width * height;
      }
};

int operator>(const int &var, Cwin &win)
{
    return(var > win.area());
}

int main()
{
    Cwin win1('A', 70, 80);
    Cwin win2('B', 60, 90);

    if(win1 > win2)
      cout << "win1 is larger than win2" << endl;
    else
      cout << "win1 is smaller than win2" << endl;

    if(win1 > 7000)
      cout << "win1 is larger than 7000" << endl;
    else
      cout << "win1 is smaller than 7000" << endl;

    if(4500 > win2)
      cout << "win2 is smaller than 4500" << endl;

    else
      cout << "win2 is larger than 4500" << endl;
      return 0; 
}