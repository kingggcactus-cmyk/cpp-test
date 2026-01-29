#include <iostream>
using namespace std;
class Cwin{
    public:
    char id;
    int width;
    int height;
    int area(void)
    {
        return width*height;
    }
};

int main()
{
    Cwin win1;
    win1.id = 'A';
    win1.width = 50;
    win1.height = 40;

    cout << "Window " << win1.id;
    cout << ", area = " << win1.area() << endl;
    cout << "sizeof(win1) = " << sizeof(win1) << "bytes" << endl;
    return 0;
}