#include <iostream>
using namespace std;
class CShape{
    public:
      virtual int area() = 0;
      virtual void show_area()
      {
        cout << "area= " << area() << endl;
      }
      virtual ~CShape(){
        cout << "CShape()解構子被呼叫了..." << endl;       
      }
};

class Cwin : public CShape{
    protected:
      int width, height;
    public:
      Cwin(int w = 10, int h = 10):width(w), height(h){}
      virtual int area() 
      {
        return width*height;
      }
      void show_area()
      {
        cout << "CWin物件的面積= " << area() << endl;
      }
      virtual ~Cwin(){
        cout << "~CWin解構子被呼叫了..." << endl;
      }
};

class CMiniWin : public Cwin{
    public:
      CMiniWin(int w, int h):Cwin(w, h){}
      virtual int area()
      {
        return (int)(0.5*width*height);
      }
      void show_area()
      {
        cout << "CMiniWin物件的面積..." << endl;
      }
      virtual ~CMiniWin(){
        cout << "~CMiniWin()建構子被呼叫了..." << endl;
      }
};

int main()
{
    CShape *ptr = new Cwin(50, 60);
    ptr->show_area();
    cout << "銷毀CWin物件..." << endl;
    delete ptr;
    cout << endl;

    ptr = new CMiniWin(50, 50);
    ptr->show_area();
    cout << "銷毀CMiniWin物件..." << endl;
    delete ptr;
    cout << endl;

    CMiniWin m_win(100, 100);
    m_win.show_area();
    return 0;
}