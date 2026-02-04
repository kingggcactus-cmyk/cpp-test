#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      static int num;
      Cwin(char i, int w, int h):id(i), width(w), height(h)
      {
        num++;
      }
      Cwin()
      {
        num++;
      }
};

int Cwin::num = 0;

int main()
{
    Cwin win1('A', 50, 40);
    Cwin win2('B', 60, 80);
    cout << "已建立 " << Cwin::num << " 個物件了" << endl;
    Cwin my_win[4];
    cout << "已建立 " << Cwin::num << " 個物件了" << endl;
    return 0;

}