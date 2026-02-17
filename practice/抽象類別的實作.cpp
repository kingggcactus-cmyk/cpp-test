#include <iostream>
#include <cstring>
using namespace std;
class CShape{
    public:
      virtual int area() = 0;
      void show_area()
      {
        cout << "area= " << area() << endl;
      }
};

class Cwin : public CShape{
    protected:
      int width, height;
    public:
      Cwin(int w = 10, int h = 10){
        width = w;
        height = h;
      }
      virtual int area()
      {
        return height*width;
      }
};

class CCirWin : public CShape{
    protected:
      int radius;
    public:
      CCirWin(int r = 10)
      {
        radius = r;
      }
      virtual int area()
      {
        return(int)(3.14*radius*radius);
      }
      void show_area()
      {
        cout << "CCirWin物件的面積= " << area() << endl;
      }
};

int main()
{
    Cwin win1(50, 60);
    CCirWin win2(100);

    win1.show_area();
    win2.show_area();
    return 0;
}