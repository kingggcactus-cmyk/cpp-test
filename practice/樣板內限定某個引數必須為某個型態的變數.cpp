#include <iostream>
using namespace std;
template <typename T1, typename T2, char id = 'D'>
class Cwin{
    protected:
      T1 width;
      T2 height;
    public:
      Cwin(T1 w, T2 h):width(w), height(h){};
      void show(void);
};

template <typename T1, typename T2, char id>
void Cwin<T1, T2, id >::show()
{
    cout << id << endl;
    cout << "width= " << width << ", ";
    cout << "height= " << height << endl;
}

int main()
{
    Cwin <int, double, 'A'> win1(50, 60.05);
    Cwin <double, int> win2(50.25, 74);

    cout << "win1 object: ";
    win1.show();
    cout << "win2 object: ";
    win2.show();
    return 0;
}