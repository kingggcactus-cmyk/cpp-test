#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    protected:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 10, int h = 10)
      {
        id = i;
        width = w;
        height = h;
      }
      void show_area(void)
      {
        cout << "window " << id << ", area= " << area() << endl;
      }
      virtual int area(void)
      {
        return height*width;
      }
};

class CMiniWin : public Cwin{
    public:
      CMiniWin(char i, int w, int h):Cwin(i, w, h){}

      virtual int area(void)
      {
        return (int)(0.8*width*height);
      }
};

int main()
{
    Cwin win('A', 70, 80);
    CMiniWin m_win('B', 50, 60);

    Cwin *ptr = NULL;
    ptr = &win;
    ptr->show_area();

    ptr = &m_win;
    ptr->show_area();
    return 0;
}