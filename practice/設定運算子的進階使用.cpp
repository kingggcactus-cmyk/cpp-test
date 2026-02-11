#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    private:
      char id, *title;
    public:
      Cwin(char i = 'D', const char *text = "Default window"):id(i)
      {
        title = new char[50];
        strcpy(title, text);
      }
      void set_data(char i, const char *text)
      {
        id = i;
        strcpy(title, text);
      }
      Cwin &operator=(const Cwin &win)
      {
        id = win.id;
        strcpy(this->title, win.title);
        return *this;
      }
      void show(void)
      {
        cout << "window " << id << ": " << title << endl;
      }
      ~Cwin(){ delete [] title; }

      Cwin(const Cwin &win)
      {
        id = win.id;
        strcpy(title, win.title);
      }
};

int main()
{
    Cwin win1('A', "main window");
    Cwin win2('B', "big window");
    Cwin win3;

    win1.show();
    win2.show();
    win3.show();

    win1 = win2 = win3;
    win1.set_data('A', "hello window");

    cout << "設定 win1=win2=win3 , 並更改 win1 的成員之後..." << endl;
    win1.show();
    win2.show();
    win3.show();
    return 0;
}