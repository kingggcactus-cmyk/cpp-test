#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
    {
        cout << "建構子被呼叫了..." << endl;
    }
     Cwin(const Cwin &win)
     {
        cout << "拷貝建構子被呼叫了..." << endl;
        id = win.id;
        width = win.width;
        height = win.height;
     }
      void show_number()
      {
        cout << "window " << id << ": ";
        cout << "width= " << width << ", height= " << height << endl;
      }
};

int main()
{
    Cwin win1('A', 50, 40);
    Cwin win2(win1);

    win1.show_number();
    win2.show_number();
    return 0;
}