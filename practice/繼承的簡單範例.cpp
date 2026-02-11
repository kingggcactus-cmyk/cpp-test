#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 10, int h = 10):id(i), width(w), height(h)
      {
        cout << "Cwin()建構子被呼叫了..." << endl;
      }
      void show_member(void)
      {
        cout << "window " << id << ": ";
        cout << "width= " << width << ", height= " << height << endl;
      }
};

class CTextWin : public Cwin{
    private:
      char text[20];
    public:
      CTextWin(const char *tx)
      {
        cout << "CTextWin()建構子被呼叫了..." << endl;
        strcpy(text, tx);
      }
      void show_text()
      {
        cout << "text = " << text << endl;
      }
};

int main()
{
    Cwin win('A', 50, 60);
    CTextWin txt("hello C++");

    win.show_member();
    txt.show_member();
    txt.show_text();

    cout << "win 物件占了 " << sizeof(win) << " bytes " << endl;
    cout << "txt 物件占了 " << sizeof(txt) << " bytes " << endl;
    return 0;
}