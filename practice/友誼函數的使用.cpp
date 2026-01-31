#include <iostream>
using namespace std;
class Cwin{
    public:
      void set_data(char i, int w, int h)
      {
        id = i;
        width = w;
        height = h;
      }
    private:
      char id;
      int width;
      int height;
    friend void show_number(Cwin);
};

void show_number(Cwin w)
{
    cout << "window" << w.id;
    cout << ": width = " << w.width;
    cout << ", height = " << w.height << endl;
}

int main()
{
    Cwin win1, win2;
    win1.set_data('A', 50, 40);
    win2.set_data('B', 80, 60);
    show_number(win1);
    show_number(win2);
    return 0;
}