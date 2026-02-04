#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
      static int num;
    public:
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {
        num++;
      }
      Cwin()
      {
        num++;
      }
      static void count()
      {
        cout << "已建立 " << num << " 個物件了" << endl;
      }
};

int Cwin::num = 0;

int main()
{
    Cwin::count();
    Cwin win1('A', 50, 40);
    Cwin win2('B', 60, 80);
    Cwin::count();
    Cwin my_win[4];
    Cwin::count();
    return 0;

}