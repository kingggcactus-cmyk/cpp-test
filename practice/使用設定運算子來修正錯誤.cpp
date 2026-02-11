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
      void operator=(const Cwin &win)
      {
        id = win.id;
        strcpy(this->title, win.title);
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
    Cwin win1('A', "Main window");
    Cwin win2;
    win1.show();
    win2.show();

    win1 = win2;
    cout << " " << "設定 win1 = win2 之後..." << endl;
    win1.show();
    win2.show();

    win1.set_data('B', "Hello window");
    cout << " " << "更改 win1 的資料成員後..." << endl;
    win1.show();
    win2.show();
    return 0;
}