#include <iostream>
using namespace std;
template <typename T>
class Cwin{
    protected:
      T width, height;
    public:
      Cwin(T w, T h):width(w), height(h){};
      void show(void);
};

template <typename T>
void Cwin<T>::show()
{
    cout << "width= " << width << ", ";
    cout << "height= " << height << endl;
}

int main()
{
    Cwin <int> win1(50, 60);
    Cwin <double> win2(50.25, 60.74);

    cout << "win1 object: ";
    win1.show();
    cout << "win2 object: ";
    win2.show();
    return 0;
}