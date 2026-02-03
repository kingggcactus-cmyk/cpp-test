#include <iostream>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      void set_member(char i, int w, int h)
      {
        id = i;
        width = w;
        height = h;
      }
      int area(void)
      {
        return width*height;
      }
      friend void largest(Cwin[], int);
};

void largest(Cwin win[], int n)
{
    int max = 0, iw;
    for(int i = 0; i < n; i++)
    {
        if(win[i].area()>max)
        {
            iw = i;
            max = win[i].area();
        }
    }
    cout << "largest window " << win[iw].id << endl;
    
}

int main()
{
    Cwin win[3];
    win[0].set_member('A', 60, 70);
    win[1].set_member('B', 40, 60);
    win[2].set_member('C', 80, 50);
    largest(win, 3);
    return 0;
}