#include <iostream>
using namespace std;
template <typename T>
class Cwin{
      T width, height;
    public:
      Cwin(T w, T h):width(w), height(h){};
      T area(void){ return width*height; }
};

template <> int Cwin<int>::area(void)
{
    return 0;
}
int main()
{
    Cwin <int> win1(50, 60);
    Cwin <double> win2(50.25, 74.56);

    cout << "win1 object: ";
    cout << win1.area() << endl;

    cout << "win2 object: ";
    cout << win2.area() << endl;
    return 0;
}