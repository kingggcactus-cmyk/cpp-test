#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
      Cwin(char i, int w, int h)
      {
        id = i;
        width = w;
        height = h;
        cout << "Cwin(char, int, int)建構子被呼叫了..." << endl;
      }
    public:
      static Cwin* createInstance(char i, int w, int h)
      {
        return new Cwin(i, w, h);
      }
      
      void show_member(void)
      {
        cout << "Window " << id << ": ";
        cout << "width= " << width << ", height= " << height << endl;
      }
};

int main()
{
    Cwin *win = Cwin::createInstance('A', 50, 40);
    win -> show_member();
    delete win;
    return 0;
}