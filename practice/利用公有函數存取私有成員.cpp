#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width;
      int height;

    public:
      int area()
      {
        return width * height;
      }
      void show_area(void)
      {
        cout << "Wimdow " << id << ", area = " << area() << endl;
      }
      void set_data(char i, int w, int h)
      {
        id = i;
        if(w>0 && h>0)
        {
            width = w;
            height = h;
        }
        else cout << "Input error!" << endl;
      }
};

int main()
{
    Cwin win1;

    win1.set_data('A', 50, 40);
    win1.show_area();
    return 0;
}