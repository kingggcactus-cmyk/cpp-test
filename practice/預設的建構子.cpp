#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i, int w, int h)
      {
        id = i;
        width = w;
        height = h;
        cout << "Cwin(char, int, int)建構子被呼叫了..." << endl;
      }
      Cwin(int w, int h)
      {
        id = 'Z';
        width = w;
        height = h;
        cout << "Cwin(int, int)建構子被呼叫了..." << endl;
      }
      Cwin()
      {
        id = 'D';
        width = 100;
        height = 100;
        cout << "預設建構子被呼叫了..." << endl;
      }
      void show_member(void)
      {
        cout << "Window " << id << ": ";
        cout << "width= " << width << ", height= " << height << endl;
      }
};

int main()
{
    Cwin win1('A', 50, 40);
    Cwin win2(80, 120);
    Cwin win3;

    win1.show_member();
    win2.show_member();
    win3.show_member();
    return 0;
}