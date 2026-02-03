#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 100, int h = 100):id(i), width(w), height(h)
      {
        cout << "建構子被呼叫了..." << endl;
      }
      void show_member(void)
      {
        cout << "window " << id << ": ";
        cout << "width = " << width << ", height = " << height << endl;
      }
};

int main()
{
    Cwin win1('A', 50, 40);
    Cwin my_win[3]={
        Cwin('B', 60, 70),
        Cwin('C', 80, 90),
        Cwin('D', 100, 110)
    };
    win1.show_member();
    for(int i = 0; i < 3; i++)
    my_win[i].show_member();
    return 0;
}