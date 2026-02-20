#include <iostream>
using namespace std;
template <typename T>
class Cwin{
      T width, height;
    public:
      Cwin(T w, T h):width(w), height(h){};
      T area(void){ return width*height; }
};

template <> class Cwin <int>{
    int width, height;
    public:
      Cwin(int w, int h):width(w), height(h){};
      int area(void){ return 0; }
};

int main()
{
    Cwin <int> win1(50, 60);
    Cwin <double> win2(50.25, 74.56);
    Cwin <short> win3(12, 45);

    cout << "win1 object: ";
    cout << win1.area() << endl;

    cout << "win2 object: ";
    cout << win2.area() << endl;

    cout << "win3 object: ";
    cout << win3.area() << endl;
    return 0;
}