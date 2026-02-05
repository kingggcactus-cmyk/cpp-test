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
      ~Cwin()
      {
        cout << "解構子被呼叫了， win" << this->id << "被銷毀了" << endl;
        system("pause");
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
    Cwin win2('B', 40, 50);
    Cwin win3('C', 60, 70);
    Cwin win4('D', 90, 40);

    win1.show_number();
    win2.show_number();
    return 0;
}