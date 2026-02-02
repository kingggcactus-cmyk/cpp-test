#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 100, int h = 100):id(i), width(w), height(h)
      {
        cout << "成員已經初始化了" << endl;
      }
      void show_number(void)
      {
        cout << "window" << id << ": ";
        cout << "width = " << width << ", height = " << height << endl;
      }
};

int main()
{
    Cwin win1('A', 80);
    Cwin win2;
    win1.show_number();
    win2.show_number();
    return 0;
}